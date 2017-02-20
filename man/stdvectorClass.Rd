\name{stdvectorClass}
\alias{stdvectorCreate}
\alias{stdvectorPushBack}
\alias{stdvectorSize}
\alias{stdvectorClear}
\alias{stdvectorToVector}
\alias{stdvectorSubset}
\alias{stdvectorReplace}
\alias{stdvectorErase}
\alias{stdvectorClone}
\alias{is.stdvector}
\alias{print.stdvector}
\alias{toString.stdvector}
\title{std::vector R wrapper}
\description{
Create and manipulate a C++ std:::vector in R.
}
\usage{

stdvectorCreate(type = "double", reserve = 0L)
stdvectorPushBack(sdv, values)
stdvectorSize(sdv)
stdvectorClear(sdv)
stdvectorToVector(sdv)
stdvectorSubset(sdv,indexes)
stdvectorReplace(sdv,indexes,values)
stdvectorErase(sdv,indexFrom,indexTo)
stdvectorClone(sdv)
is.stdvector(x)
\method{print}{stdvector}(x, \dots)
\method{toString}{stdvector}(x, \dots)
}
\arguments{
  \item{type}{Character string indicating the type of the vector; possible values: \code{double,numeric,integer,logical,character,any}. }
  \item{reserve}{The number of slots to be pre-allocated in the stdvector.}
  \item{sdv}{A stdvector object, as returned by \code{stdvectorCreate}.}
  \item{\dots}{optional arguments passed to inner \code{print} and \code{toString} methods. Unused.}
  \item{x}{A stdvector object, as returned by \code{stdvectorCreate}.}
  \item{values}{Values to be appended (in \code{stdvectorPushBack}) or set (in \code{stdvectorReplace}).}
  \item{indexes}{Indexes used to subset the current stdvector, in case of out of bounds indexes an error will be raised.}
  \item{indexFrom}{Used by \code{stdvectorErase} as starting index (inclusive) for the range of elements to be removed from stdvector.}
  \item{indexTo}{Used by \code{stdvectorErase} as ending index (inclusive) for the range of elements to be removed from stdvector.}
}
\details{

  \itemize{
  
    \item \code{stdvectorCreate} creates a stdvector object of the indicated type.
    \item \code{stdvectorPushBack} appends elements to an existing stdvector (see note for \code{type='any'}).
    \item \code{stdvectorSize} returns the number of elements of an existing stdvector.
    \item \code{stdvectorClear} removes all the elements of an existing stdvector.
    \item \code{stdvectorToVector} turns an existing stdvector into an R vector of the type chosen when the stdvector has been created.
    \item \code{stdvectorSubset} subsets an existing stdvector returning an R vector with the values corresponding to the selected indexes.
    \item \code{stdvectorReplace} replace the elements at \code{indexes} positions with the values in \code{values} argument (see note for \code{type='any'}).
    \item \code{stdvectorErase} remove the elements from \code{indexFrom} to \code{indexTo} positions.
    \item \code{stdvectorClone} create a deep copy of the stdvector object.
  }

}
\note{
\code{stdvector} 
\itemize{
  \item stdvector objects are treated as references, so if you do \code{sv2 <- sv1} and then you modify \code{sv2} actually also \code{sv1} will be modified. You need to do \code{sv2 <- stdvectorClone(sv1)} to actually create a copy.
  \item \code{stdvectorPushBack} in case of stdvector of \code{type='any'} will append the element passed in the argument \code{values} as a single new element of the vector, even if it's a list.
  \item \code{stdvectorSubset} indexes must be between 1 and the size of the stdvector.
  \item \code{stdvectorReplace} \code{indexes} and \code{values} must have the same length. In case of stdvector of \code{type='any'} will accept only \code{indexes} of length one.
  }
}
\value{

  \itemize{
  
    \item \code{stdvectorCreate} returns an object of class \code{stdvector}.
    \item \code{stdvectorPushBack} return \code{NULL} invisibly.
    \item \code{stdvectorSize} returns an integer equal to the size of the \code{stdvector}.
    \item \code{stdvectorClear} returns \code{NULL} invisibly.
    \item \code{stdvectorToVector} returns an R vector of the type chosen when the \code{stdvector} has been created (\code{type='any'} will return a list).
    \item \code{stdvectorSubset} returns an R vector (of the type chosen when the \code{stdvector} has been created, \code{type='any'} will return a list) with the values corresponding to the selected indexes.
    \item \code{stdvectorReplace} returns \code{NULL} invisibly.
    \item \code{stdvectorErase} returns \code{NULL} invisibly.
    \item \code{stdvectorClone} returns an object of class \code{stdvector} which is the copy of the passed object.
  }
}
\references{
See http://en.cppreference.com/w/cpp/container/vector
}
\examples{
  # create a stdvector
  sv <- stdvectorCreate('integer')
  # add 100 values to it
  for(i in 1:100){
    # note that sv is modified in-place
    stdvectorPushBack(sv,i)
  }
  # get a normal R vector from the stdvector
  v <- stdvectorToVector(sv)

}

