// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// int2bin
std::vector<bool> int2bin(int n);
RcppExport SEXP _scfind_int2bin(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(int2bin(n));
    return rcpp_result_gen;
END_RCPP
}
// eliasFanoCoding
List eliasFanoCoding(List inds_list, NumericVector l);
RcppExport SEXP _scfind_eliasFanoCoding(SEXP inds_listSEXP, SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type inds_list(inds_listSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(eliasFanoCoding(inds_list, l));
    return rcpp_result_gen;
END_RCPP
}
// eliasFanoDecoding
NumericVector eliasFanoDecoding(LogicalVector H, LogicalVector L, int l);
RcppExport SEXP _scfind_eliasFanoDecoding(SEXP HSEXP, SEXP LSEXP, SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type H(HSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(eliasFanoDecoding(H, L, l));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scfind_int2bin", (DL_FUNC) &_scfind_int2bin, 1},
    {"_scfind_eliasFanoCoding", (DL_FUNC) &_scfind_eliasFanoCoding, 2},
    {"_scfind_eliasFanoDecoding", (DL_FUNC) &_scfind_eliasFanoDecoding, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_scfind(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
