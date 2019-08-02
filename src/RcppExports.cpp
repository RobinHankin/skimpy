// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mvp_taylor_onevar
List mvp_taylor_onevar(const List& allnames, const List& allpowers, const NumericVector& coefficients, const NumericVector& n, const CharacterVector& v);
RcppExport SEXP _mvp_mvp_taylor_onevar(SEXP allnamesSEXP, SEXP allpowersSEXP, SEXP coefficientsSEXP, SEXP nSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type allnames(allnamesSEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers(allpowersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(mvp_taylor_onevar(allnames, allpowers, coefficients, n, v));
    return rcpp_result_gen;
END_RCPP
}
// mvp_taylor_onepower_onevar
List mvp_taylor_onepower_onevar(const List& allnames, const List& allpowers, const NumericVector& coefficients, const NumericVector& n, const CharacterVector& v);
RcppExport SEXP _mvp_mvp_taylor_onepower_onevar(SEXP allnamesSEXP, SEXP allpowersSEXP, SEXP coefficientsSEXP, SEXP nSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type allnames(allnamesSEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers(allpowersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(mvp_taylor_onepower_onevar(allnames, allpowers, coefficients, n, v));
    return rcpp_result_gen;
END_RCPP
}
// mvp_taylor_allvars
List mvp_taylor_allvars(const List& allnames, const List& allpowers, const NumericVector& coefficients, const NumericVector& n);
RcppExport SEXP _mvp_mvp_taylor_allvars(SEXP allnamesSEXP, SEXP allpowersSEXP, SEXP coefficientsSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type allnames(allnamesSEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers(allpowersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(mvp_taylor_allvars(allnames, allpowers, coefficients, n));
    return rcpp_result_gen;
END_RCPP
}
// simplify
List simplify(const List& allnames, const List& allpowers, const NumericVector& coefficients);
RcppExport SEXP _mvp_simplify(SEXP allnamesSEXP, SEXP allpowersSEXP, SEXP coefficientsSEXP) {
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
RcppExport SEXP _mvp_mvp_prod(SEXP allnames1SEXP, SEXP allpowers1SEXP, SEXP coefficients1SEXP, SEXP allnames2SEXP, SEXP allpowers2SEXP, SEXP coefficients2SEXP) {
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
RcppExport SEXP _mvp_mvp_add(SEXP allnames1SEXP, SEXP allpowers1SEXP, SEXP coefficients1SEXP, SEXP allnames2SEXP, SEXP allpowers2SEXP, SEXP coefficients2SEXP) {
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
RcppExport SEXP _mvp_mvp_power(SEXP allnamesSEXP, SEXP allpowersSEXP, SEXP coefficientsSEXP, SEXP nSEXP) {
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
RcppExport SEXP _mvp_mvp_deriv(SEXP allnamesSEXP, SEXP allpowersSEXP, SEXP coefficientsSEXP, SEXP vSEXP) {
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
// mvp_substitute
List mvp_substitute(const List& allnames, const List& allpowers, const NumericVector& coefficients, const CharacterVector& v, const NumericVector& values);
RcppExport SEXP _mvp_mvp_substitute(SEXP allnamesSEXP, SEXP allpowersSEXP, SEXP coefficientsSEXP, SEXP vSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type allnames(allnamesSEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers(allpowersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type v(vSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(mvp_substitute(allnames, allpowers, coefficients, v, values));
    return rcpp_result_gen;
END_RCPP
}
// mvp_substitute_mvp
List mvp_substitute_mvp(const List& allnames1, const List& allpowers1, const NumericVector& coefficients1, const List& allnames2, const List& allpowers2, const NumericVector& coefficients2, const CharacterVector& v);
RcppExport SEXP _mvp_mvp_substitute_mvp(SEXP allnames1SEXP, SEXP allpowers1SEXP, SEXP coefficients1SEXP, SEXP allnames2SEXP, SEXP allpowers2SEXP, SEXP coefficients2SEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type allnames1(allnames1SEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers1(allpowers1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients1(coefficients1SEXP);
    Rcpp::traits::input_parameter< const List& >::type allnames2(allnames2SEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers2(allpowers2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients2(coefficients2SEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(mvp_substitute_mvp(allnames1, allpowers1, coefficients1, allnames2, allpowers2, coefficients2, v));
    return rcpp_result_gen;
END_RCPP
}
// mvp_vector_subs
NumericVector mvp_vector_subs(const List& allnames, const List& allpowers, const NumericVector& coefficients, const List& subnames, const NumericVector& M, const int& nrows, const int& ncols);
RcppExport SEXP _mvp_mvp_vector_subs(SEXP allnamesSEXP, SEXP allpowersSEXP, SEXP coefficientsSEXP, SEXP subnamesSEXP, SEXP MSEXP, SEXP nrowsSEXP, SEXP ncolsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type allnames(allnamesSEXP);
    Rcpp::traits::input_parameter< const List& >::type allpowers(allpowersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< const List& >::type subnames(subnamesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int& >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< const int& >::type ncols(ncolsSEXP);
    rcpp_result_gen = Rcpp::wrap(mvp_vector_subs(allnames, allpowers, coefficients, subnames, M, nrows, ncols));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mvp_mvp_taylor_onevar", (DL_FUNC) &_mvp_mvp_taylor_onevar, 5},
    {"_mvp_mvp_taylor_onepower_onevar", (DL_FUNC) &_mvp_mvp_taylor_onepower_onevar, 5},
    {"_mvp_mvp_taylor_allvars", (DL_FUNC) &_mvp_mvp_taylor_allvars, 4},
    {"_mvp_simplify", (DL_FUNC) &_mvp_simplify, 3},
    {"_mvp_mvp_prod", (DL_FUNC) &_mvp_mvp_prod, 6},
    {"_mvp_mvp_add", (DL_FUNC) &_mvp_mvp_add, 6},
    {"_mvp_mvp_power", (DL_FUNC) &_mvp_mvp_power, 4},
    {"_mvp_mvp_deriv", (DL_FUNC) &_mvp_mvp_deriv, 4},
    {"_mvp_mvp_substitute", (DL_FUNC) &_mvp_mvp_substitute, 5},
    {"_mvp_mvp_substitute_mvp", (DL_FUNC) &_mvp_mvp_substitute_mvp, 7},
    {"_mvp_mvp_vector_subs", (DL_FUNC) &_mvp_mvp_vector_subs, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_mvp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
