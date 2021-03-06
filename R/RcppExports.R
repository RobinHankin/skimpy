# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

mvp_taylor_onevar <- function(allnames, allpowers, coefficients, v, n) {
    .Call(`_mvp_mvp_taylor_onevar`, allnames, allpowers, coefficients, v, n)
}

mvp_taylor_onepower_onevar <- function(allnames, allpowers, coefficients, v, n) {
    .Call(`_mvp_mvp_taylor_onepower_onevar`, allnames, allpowers, coefficients, v, n)
}

mvp_taylor_allvars <- function(allnames, allpowers, coefficients, n) {
    .Call(`_mvp_mvp_taylor_allvars`, allnames, allpowers, coefficients, n)
}

simplify <- function(allnames, allpowers, coefficients) {
    .Call(`_mvp_simplify`, allnames, allpowers, coefficients)
}

mvp_prod <- function(allnames1, allpowers1, coefficients1, allnames2, allpowers2, coefficients2) {
    .Call(`_mvp_mvp_prod`, allnames1, allpowers1, coefficients1, allnames2, allpowers2, coefficients2)
}

mvp_add <- function(allnames1, allpowers1, coefficients1, allnames2, allpowers2, coefficients2) {
    .Call(`_mvp_mvp_add`, allnames1, allpowers1, coefficients1, allnames2, allpowers2, coefficients2)
}

mvp_power <- function(allnames, allpowers, coefficients, n) {
    .Call(`_mvp_mvp_power`, allnames, allpowers, coefficients, n)
}

mvp_deriv <- function(allnames, allpowers, coefficients, v) {
    .Call(`_mvp_mvp_deriv`, allnames, allpowers, coefficients, v)
}

mvp_substitute <- function(allnames, allpowers, coefficients, v, values) {
    .Call(`_mvp_mvp_substitute`, allnames, allpowers, coefficients, v, values)
}

mvp_substitute_mvp <- function(allnames1, allpowers1, coefficients1, allnames2, allpowers2, coefficients2, v) {
    .Call(`_mvp_mvp_substitute_mvp`, allnames1, allpowers1, coefficients1, allnames2, allpowers2, coefficients2, v)
}

mvp_vectorised_substitute <- function(allnames, allpowers, coefficients, M, nrows, ncols, v) {
    .Call(`_mvp_mvp_vectorised_substitute`, allnames, allpowers, coefficients, M, nrows, ncols, v)
}

mvp_to_series <- function(allnames, allpowers, coefficients, v) {
    .Call(`_mvp_mvp_to_series`, allnames, allpowers, coefficients, v)
}

