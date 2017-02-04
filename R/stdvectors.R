toString.stdvector <- function(x,...){
  len <- stdvectorSize(x)
  return(paste('stdvector of',.getStringFromType(x$type),' with',len,'elements'))
}
print.stdvector <- function(x,...){
  print(toString.stdvector(x))
}
is.stdvector <- function(x){
  inherits(x,'stdvector')
}