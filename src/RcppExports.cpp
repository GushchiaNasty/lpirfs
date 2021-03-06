// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_vals_lagcrit
NumericVector get_vals_lagcrit(List y, List x, int lag_crit, int h, int k, int max_lags, int n_obs);
RcppExport SEXP _lpirfs_get_vals_lagcrit(SEXP ySEXP, SEXP xSEXP, SEXP lag_critSEXP, SEXP hSEXP, SEXP kSEXP, SEXP max_lagsSEXP, SEXP n_obsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type lag_crit(lag_critSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type max_lags(max_lagsSEXP);
    Rcpp::traits::input_parameter< int >::type n_obs(n_obsSEXP);
    rcpp_result_gen = Rcpp::wrap(get_vals_lagcrit(y, x, lag_crit, h, k, max_lags, n_obs));
    return rcpp_result_gen;
END_RCPP
}
// hp_filter
List hp_filter(NumericVector x, double lambda);
RcppExport SEXP _lpirfs_hp_filter(SEXP xSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(hp_filter(x, lambda));
    return rcpp_result_gen;
END_RCPP
}
// newey_west
List newey_west(NumericVector y, NumericMatrix x, int h);
RcppExport SEXP _lpirfs_newey_west(SEXP ySEXP, SEXP xSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(newey_west(y, x, h));
    return rcpp_result_gen;
END_RCPP
}
// newey_west_tsls
List newey_west_tsls(NumericVector y, NumericMatrix x, NumericMatrix z, int h);
RcppExport SEXP _lpirfs_newey_west_tsls(SEXP ySEXP, SEXP xSEXP, SEXP zSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(newey_west_tsls(y, x, z, h));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lpirfs_get_vals_lagcrit", (DL_FUNC) &_lpirfs_get_vals_lagcrit, 7},
    {"_lpirfs_hp_filter", (DL_FUNC) &_lpirfs_hp_filter, 2},
    {"_lpirfs_newey_west", (DL_FUNC) &_lpirfs_newey_west, 3},
    {"_lpirfs_newey_west_tsls", (DL_FUNC) &_lpirfs_newey_west_tsls, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_lpirfs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
