// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// corr_betw_matrices_paired
NumericVector corr_betw_matrices_paired(const NumericMatrix& x, const NumericMatrix& y);
RcppExport SEXP _lineup2_corr_betw_matrices_paired(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(corr_betw_matrices_paired(x, y));
    return rcpp_result_gen;
END_RCPP
}
// corr_betw_matrices_unpaired_bestright
List corr_betw_matrices_unpaired_bestright(const NumericMatrix& x, const NumericMatrix& y);
RcppExport SEXP _lineup2_corr_betw_matrices_unpaired_bestright(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(corr_betw_matrices_unpaired_bestright(x, y));
    return rcpp_result_gen;
END_RCPP
}
// corr_betw_matrices_unpaired_bestpairs
List corr_betw_matrices_unpaired_bestpairs(const NumericMatrix& x, const NumericMatrix& y, const double corr_threshold);
RcppExport SEXP _lineup2_corr_betw_matrices_unpaired_bestpairs(SEXP xSEXP, SEXP ySEXP, SEXP corr_thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double >::type corr_threshold(corr_thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(corr_betw_matrices_unpaired_bestpairs(x, y, corr_threshold));
    return rcpp_result_gen;
END_RCPP
}
// corr_betw_matrices_unpaired_all
NumericMatrix corr_betw_matrices_unpaired_all(const NumericMatrix& x, const NumericMatrix& y);
RcppExport SEXP _lineup2_corr_betw_matrices_unpaired_all(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(corr_betw_matrices_unpaired_all(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rmsd_betw_matrices
NumericMatrix rmsd_betw_matrices(const NumericMatrix& x, const NumericMatrix& y);
RcppExport SEXP _lineup2_rmsd_betw_matrices(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rmsd_betw_matrices(x, y));
    return rcpp_result_gen;
END_RCPP
}
// mad_betw_matrices
NumericMatrix mad_betw_matrices(const NumericMatrix& x, const NumericMatrix& y);
RcppExport SEXP _lineup2_mad_betw_matrices(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(mad_betw_matrices(x, y));
    return rcpp_result_gen;
END_RCPP
}
// propdiff_betw_matrices
NumericMatrix propdiff_betw_matrices(const NumericMatrix& x, const NumericMatrix& y);
RcppExport SEXP _lineup2_propdiff_betw_matrices(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(propdiff_betw_matrices(x, y));
    return rcpp_result_gen;
END_RCPP
}
// fscale
NumericVector fscale(const NumericVector& x, const NumericVector& y);
RcppExport SEXP _lineup2_fscale(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(fscale(x, y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lineup2_corr_betw_matrices_paired", (DL_FUNC) &_lineup2_corr_betw_matrices_paired, 2},
    {"_lineup2_corr_betw_matrices_unpaired_bestright", (DL_FUNC) &_lineup2_corr_betw_matrices_unpaired_bestright, 2},
    {"_lineup2_corr_betw_matrices_unpaired_bestpairs", (DL_FUNC) &_lineup2_corr_betw_matrices_unpaired_bestpairs, 3},
    {"_lineup2_corr_betw_matrices_unpaired_all", (DL_FUNC) &_lineup2_corr_betw_matrices_unpaired_all, 2},
    {"_lineup2_rmsd_betw_matrices", (DL_FUNC) &_lineup2_rmsd_betw_matrices, 2},
    {"_lineup2_mad_betw_matrices", (DL_FUNC) &_lineup2_mad_betw_matrices, 2},
    {"_lineup2_propdiff_betw_matrices", (DL_FUNC) &_lineup2_propdiff_betw_matrices, 2},
    {"_lineup2_fscale", (DL_FUNC) &_lineup2_fscale, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_lineup2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
