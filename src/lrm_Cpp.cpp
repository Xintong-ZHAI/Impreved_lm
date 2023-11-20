#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
using namespace Rcpp;

//' @param X numeric matrix
//' @param Y numeric vector
//' @return the inverse of \code{t(X)%*%Y}
// [[Rcpp::export]]
arma::vec lrm_coef(const arma::mat& X, const arma::vec& Y){
  arma::vec coef=solve(X, Y);
  return(coef);
}
