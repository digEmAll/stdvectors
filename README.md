# stdvectors
## C++ Standard Library Vectors in R

The `stdvectors` package allows the creation and manipulation of C++ std::vector's in R.  
std::vector's are dynamically allocated arrays, which are especially helpful when you need to fill a huge vector (e.g. in a loop) 
but you don't know the size in advance.

### Examples : 

- Create a vector by adding elements one by one :

```R
sv <- stdvectorCreate(type='integer')
for(i in 1:10){
  # yes we're modify the vector in-place !
  stdvectorPushBack(sv,i)
}
```

- Turn into an R vector 

```R
v <- stdvectorToVector(sv)
```

### Benchmarks :


- Tested on :
```
R: 3.3.2 64bit   
OS: Window 10  
CPU: i5 6600K @3.5 Ghz  
RAM: 16 GB
```

```R
# Note: do not increase this too much, otherwise the first test will take ages!
n <- 150000

# R vector (concatenation)
tm1 <- system.time({
  v <- integer()
  for(i in 1:n){
    v[i] <- i
  }
}
)

# R vector (pre-allocation -> unfair test since the assumption is not knowing the size in advance)
tm2 <- system.time({
  v <- rep.int(NA_integer_,n)
  for(i in 1:n){
    v[i] <- i
  }
}
)

# stdvector
tm3 <- system.time({
  sv <- stdvectorCreate(type='integer')
  for(i in 1:n){
    stdvectorPushBack(sv,i)
  }
  v <- stdvectorToVector(sv)
}
)

> tm1
   user  system elapsed 
  10.84    0.00   10.84 
> tm2
   user  system elapsed 
   0.13    0.00    0.13 
> tm3
   user  system elapsed 
   0.18    0.00    0.19 
```

As you can see the difference is big, and it becomes bigger and bigger as the number of elements grows.


### License

GPL (>= 2)
