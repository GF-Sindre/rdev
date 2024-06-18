
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
int add(int i, int j) {
    return i + j;
}

// [[Rcpp::export]]
int message() {
    std::cout << "This was run in C++!" << std::endl;
    return 0;
}
