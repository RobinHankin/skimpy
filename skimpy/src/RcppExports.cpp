// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// simplify
List simplify(const List& allnames, const List& allpowers, const NumericVector& coefficients);
RcppExport SEXP _skimpy_simplify(SEXP allnamesSEXP, SEXP allpowersSEXP, SEXP coefficientsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type allnames(allnamesSEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers(allpowersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients(coefficientsSEXP);
    rcpp_result_gen = Rcpp::wrap(simplify(allnames, allpowers, coefficients));
    return rcpp_result_gen;
END_RCPP
}
// mvp_prod
List mvp_prod(const List& allnames1, const List& allpowers1, const NumericVector& coefficients1, const List& allnames2, const List& allpowers2, const NumericVector& coefficients2);
RcppExport SEXP _skimpy_mvp_prod(SEXP allnames1SEXP, SEXP allpowers1SEXP, SEXP coefficients1SEXP, SEXP allnames2SEXP, SEXP allpowers2SEXP, SEXP coefficients2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type allnames1(allnames1SEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers1(allpowers1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients1(coefficients1SEXP);
    Rcpp::traits::input_parameter< const List& >::type allnames2(allnames2SEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers2(allpowers2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients2(coefficients2SEXP);
    rcpp_result_gen = Rcpp::wrap(mvp_prod(allnames1, allpowers1, coefficients1, allnames2, allpowers2, coefficients2));
    return rcpp_result_gen;
END_RCPP
}
// mvp_add
List mvp_add(const List& allnames1, const List& allpowers1, const NumericVector& coefficients1, const List& allnames2, const List& allpowers2, const NumericVector& coefficients2);
RcppExport SEXP _skimpy_mvp_add(SEXP allnames1SEXP, SEXP allpowers1SEXP, SEXP coefficients1SEXP, SEXP allnames2SEXP, SEXP allpowers2SEXP, SEXP coefficients2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type allnames1(allnames1SEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers1(allpowers1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients1(coefficients1SEXP);
    Rcpp::traits::input_parameter< const List& >::type allnames2(allnames2SEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers2(allpowers2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients2(coefficients2SEXP);
    rcpp_result_gen = Rcpp::wrap(mvp_add(allnames1, allpowers1, coefficients1, allnames2, allpowers2, coefficients2));
    return rcpp_result_gen;
END_RCPP
}
// mvp_power
List mvp_power(const List& allnames, const List& allpowers, const NumericVector& coefficients, const NumericVector& n);
RcppExport SEXP _skimpy_mvp_power(SEXP allnamesSEXP, SEXP allpowersSEXP, SEXP coefficientsSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type allnames(allnamesSEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers(allpowersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(mvp_power(allnames, allpowers, coefficients, n));
    return rcpp_result_gen;
END_RCPP
}
// mvp_deriv
List mvp_deriv(const List& allnames, const List& allpowers, const NumericVector& coefficients, const CharacterVector& v);
RcppExport SEXP _skimpy_mvp_deriv(SEXP allnamesSEXP, SEXP allpowersSEXP, SEXP coefficientsSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type allnames(allnamesSEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers(allpowersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(mvp_deriv(allnames, allpowers, coefficients, v));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP skimpy_mvp_add(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP skimpy_mvp_deriv(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP skimpy_mvp_power(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP skimpy_mvp_prod(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP skimpy_simplify(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_skimpy_simplify", (DL_FUNC) &_skimpy_simplify, 3},
    {"_skimpy_mvp_prod", (DL_FUNC) &_skimpy_mvp_prod, 6},
    {"_skimpy_mvp_add", (DL_FUNC) &_skimpy_mvp_add, 6},
    {"_skimpy_mvp_power", (DL_FUNC) &_skimpy_mvp_power, 4},
    {"_skimpy_mvp_deriv", (DL_FUNC) &_skimpy_mvp_deriv, 4},
    {"skimpy_mvp_add",   (DL_FUNC) &skimpy_mvp_add,   6},
    {"skimpy_mvp_deriv", (DL_FUNC) &skimpy_mvp_deriv, 4},
    {"skimpy_mvp_power", (DL_FUNC) &skimpy_mvp_power, 4},
    {"skimpy_mvp_prod",  (DL_FUNC) &skimpy_mvp_prod,  6},
    {"skimpy_simplify",  (DL_FUNC) &skimpy_simplify,  3},
    {NULL, NULL, 0}
};

RcppExport void R_init_skimpy(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
