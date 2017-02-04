\name{stdvectors-package}
\alias{stdvectors-package}
\alias{stdvectors}
\docType{package}
\title{
  C++ Standard Library Vectors in R
}
\description{
  Allows the creation and manipulation of C++ std::vector's in R.
}
\details{
\tabular{ll}{
Package: \tab stdvectors\cr
Type: \tab Package\cr
Version: \tab 0.0.3\cr
Date: \tab 2017-02-04\cr
License: \tab GPL (>= 2)\cr
}

This package allows the creation and manipulation of C++ std::vector's in R.
std::vector's are dynamically allocated arrays, which are especially helpful when you need to fill a huge vector (e.g. in a loop) 
but you don't know the size in advance.
}
\author{
Marco Giuliano

Maintainer: Marco Giuliano <mgiuliano.mail@gmail.com>
}
\references{
  This optional section can contain literature or other references for
  background information.
cpp reference page : http://en.cppreference.com/w/
}
\keyword{ package }
\keyword{ manip }
\keyword{ iteration }
\keyword{ programming }
\seealso{
}
\examples{
  sv <- stdvectorCreate('integer')
  for(i in 1:10000){
    stdvectorPushBack(sv,i)
  }

  \dontrun{
  
    # check the time difference:
    # the first method takes around 2-3 s
    # the second method takes less than 0.1 s
    system.time({
        v <- integer()
        for(i in 1:100000){
          v[[length(v)+1]] <- i
        }
      }
    )

    # ~0.08 sec
    system.time({
        v <- stdvectorCreate('integer')
        for(i in 1:100000){
          stdvectorPushBack(v,i)
        }
      }
    )

  }
}
