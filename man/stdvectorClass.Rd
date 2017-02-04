\name{stdvectorClass}
\alias{stdvectorCreate}
\alias{stdvectorPushBack}
\alias{stdvectorSize}
\alias{stdvectorClear}
\alias{stdvectorToVector}
\alias{stdvectorSubset}
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
stdvectorClone(sdv)
is.stdvector(x)
\method{print}{stdvector}(x, \dots)
\method{toString}{stdvector}(x, \dots)
}
\arguments{
  \item{type}{Character string indicating the type of the vector; possible values: double,numeric,integer,logical,character. }
  \item{reserve}{The number of slots to be pre-allocated in the stdvector.}
  \item{sdv}{A stdvector object, as returned by \code{stdvectorCreate}.}
  \item{\dots}{optional arguments passed to inner \code{print} and \code{toString} methods. Unused.}
  \item{x}{A stdvector object, as returned by \code{stdvectorCreate}.}
  \item{values}{Values to be appended to the current stdvector.}
  \item{indexes}{Indexes used to subset the current stdvector, in case of out of bounds indexes an error will be raised.}
}
\details{

  \itemize{
  
    \item \code{stdvectorCreate} creates a stdvector object of the indicated type.
    \item \code{stdvectorPushBack} appends elements to an existing stdvector.
    \item \code{stdvectorSize} returns the number of elements of an existing stdvector.
    \item \code{stdvectorClear} removes all the elements of an existing stdvector.
    \item \code{stdvectorToVector} turns an existing stdvector into an R vector of the type chosen when the stdvector has been created.
	  \item \code{stdvectorSubset} subsets an existing stdvector returning an R vector with the values corresponding to the selected indexes.
    \item \code{stdvectorClone} create a deep copy of the stdvector object.
  }

}
\note{
\code{stdvector} objects are treated as references, so if you do \code{sv2 <- sv1} and then you modify \code{sv2} actually also \code{sv1} will be modified.
You need to do \code{sv2 <- stdvectorClone(sv1)} to actually create a copy.
}
\value{

  \itemize{
  
    \item \code{stdvectorCreate} returns an object of class \code{stdvector}.
    \item \code{stdvectorPushBack} return \code{NULL} invisibly.
    \item \code{stdvectorSize} returns an integer equal to the size of the \code{stdvector}.
    \item \code{stdvectorClear} returns \code{NULL} invisibly.
    \item \code{stdvectorToVector} returns an R vector of the type chosen when the \code{stdvector} has been created.
	  \item \code{stdvectorSubset} returns an R vector (of the type chosen when the \code{stdvector} has been created) with the values corresponding to the selected indexes.
    \item \code{stdvectorClone} returns an object of class \code{stdvector} which is the copy of the passed object.
  }
}
\seealso{
}
\examples{
  sv <- stdvectorCreate('integer')
  for(i in 1:10000){
    stdvectorPushBack(sv,i)
  }
  v <- stdvectorToVector(sv)

}

