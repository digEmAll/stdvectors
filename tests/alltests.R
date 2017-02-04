library(stdvectors,quietly=TRUE)

####################################################################################
#                               HELPER FUNCTIONS                                   #
####################################################################################
assert <- function(msg,condition){
  if(!all(condition == TRUE)){
      msg <- paste(msg,": failed!",sep=" ")
      stop(msg)
  }
}
as.typefun <- function(type){
  switch(type,
         integer=as.integer,
         numeric=as.numeric,
         double=as.double,
         character=as.character,
         logical=as.logical,
         any=identity
  )
}
indexToType <- function(i,type){
  stopifnot(length(i) == 1)
  switch(type,
         integer=as.integer(i),
         numeric=as.numeric(i),
         double=as.double(i)/2,
         character=paste0('char_',i),
         logical=i%%2==0,
         any={
            if(i%%3==0){
              as.character(i+1:10)
            }else{ 
              as.integer(i+1:3)
            }
         }
         )
}
indexToTypeVectorized <- function(i,type){
  applyFun <- ifelse(type=='any',lapply,sapply)
  as.typefun(type)(applyFun(i,indexToType,type))
}


####################################################################################
#                                     TESTS                                        #
####################################################################################
testFun <- function(reserve = 0, nelements = 7){
  nelements <- as.integer(nelements)
  types <- c("integer","numeric","double","character","logical","any")
  
  sdvList <- setNames(lapply(types,function(type)stdvectorCreate(type,reserve)),types)

  # check sizes = 0
  assert("check size=0",all(sapply(sdvList,stdvectorSize) == 0))

  # add nelements elements
  for(i in 1:nelements){
    lapply(types,function(type){stdvectorPushBack(sdvList[[type]],indexToType(i,type));i})
  }
  # check sizes = nelements
  assert(paste("check size=",nelements),all(sapply(sdvList,stdvectorSize) == nelements))

  # check conversion to vector
  for(type in types){
    vect <- stdvectorToVector(sdvList[[type]])
    expected <- indexToTypeVectorized(1:nelements,type)
    assert(paste("check stdvectorToVector for",type),identical(vect,expected))
  }
  # check subset
  for(type in types){
    # INDEX SUBSET
    idxs <- c(1L,nelements-1L,1L)
    expected <- indexToTypeVectorized(idxs,type)
    vect <- stdvectorSubset(sdvList[[type]],idxs)
    assert(paste("check stdvectorSubset for",type,"idxs:", toString(idxs)),identical(vect,expected))

    # EMPTY SUBSET
    idxs <- integer()
    expected <- indexToTypeVectorized(idxs,type)
    vect <- stdvectorSubset(sdvList[[type]], idxs)
    assert(paste("check stdvectorSubset for",type,"idxs:", toString(idxs)),identical(vect,expected))
  }
  # check clone
  sdvListClone <- lapply(sdvList,stdvectorClone)
  for(type in types){
    s <- sdvList[[type]]
    sClone <- sdvListClone[[type]]
    assert(paste("check clone equal for",type),identical(stdvectorToVector(s),stdvectorToVector(s)))
  }
  # clear the clones and check sizes == 0
  assert("check clear",all(sapply(sdvListClone,function(x){stdvectorClear(x);stdvectorSize(x)})==0))
  
  # check original sizes are still = nelements
  assert(paste("check original sizes = ",nelements),all(sapply(sdvList,stdvectorSize)==nelements))

  invisible()
}

testFun(0,50)
testFun(100,50)

####################################################################################
#                                     END                                          #
####################################################################################
