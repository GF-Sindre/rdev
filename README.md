# rdev

Combining Rcpp and C++ using the cmake method.

A minimal working example.

## Prerequisites

Verify the C++ compiler and cmake
```bash
g++ --version
cmake --version
```

Install libraries in R.
```r
install.packages("Rcpp")
```

## Setting up code

Trying the `Rcpp` skeleton code.
```r
Rcpp::Rcpp.package.skeleton("rdev")
```

Makes a separate folder, but I can move it to the root later.

Added C++ functions to the rcpp_hello_world.cpp file and ran:
```R
Rcpp::compileAttributes()
```
Then, reinstalled package
```R
devtools::install()
```
And I was able to run the C++ functions.
```bash
> rdev::message()
This was run in C++!
[1] 0
> rdev::add(6, 8)
[1] 14
```