// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// as_fusionTree
Rcpp::IntegerMatrix as_fusionTree(IntegerMatrix merge, IntegerVector order);
RcppExport SEXP _Rmergetrees_as_fusionTree(SEXP mergeSEXP, SEXP orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type merge(mergeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type order(orderSEXP);
    rcpp_result_gen = Rcpp::wrap(as_fusionTree(merge, order));
    return rcpp_result_gen;
END_RCPP
}
// createMergeMatrix
IntegerMatrix createMergeMatrix(int n, IntegerMatrix prune_res);
RcppExport SEXP _Rmergetrees_createMergeMatrix(SEXP nSEXP, SEXP prune_resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type prune_res(prune_resSEXP);
    rcpp_result_gen = Rcpp::wrap(createMergeMatrix(n, prune_res));
    return rcpp_result_gen;
END_RCPP
}
// export_order
Rcpp::IntegerVector export_order(const IntegerMatrix& merge, const IntegerVector& size);
RcppExport SEXP _Rmergetrees_export_order(SEXP mergeSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type merge(mergeSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(export_order(merge, size));
    return rcpp_result_gen;
END_RCPP
}
// export_merge
Rcpp::IntegerMatrix export_merge(const IntegerVector& parent1, const IntegerVector& parent2);
RcppExport SEXP _Rmergetrees_export_merge(SEXP parent1SEXP, SEXP parent2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type parent1(parent1SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type parent2(parent2SEXP);
    rcpp_result_gen = Rcpp::wrap(export_merge(parent1, parent2));
    return rcpp_result_gen;
END_RCPP
}
// hcToPath_cpp
List hcToPath_cpp(IntegerMatrix merge1, IntegerVector match_order, int n);
RcppExport SEXP _Rmergetrees_hcToPath_cpp(SEXP merge1SEXP, SEXP match_orderSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type merge1(merge1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type match_order(match_orderSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(hcToPath_cpp(merge1, match_order, n));
    return rcpp_result_gen;
END_RCPP
}
// match_func_int
int match_func_int(int x, IntegerVector y);
RcppExport SEXP _Rmergetrees_match_func_int(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(match_func_int(x, y));
    return rcpp_result_gen;
END_RCPP
}
// match_func_vectorInt
IntegerVector match_func_vectorInt(int x, IntegerVector y);
RcppExport SEXP _Rmergetrees_match_func_vectorInt(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(match_func_vectorInt(x, y));
    return rcpp_result_gen;
END_RCPP
}
// pruneSplits
List pruneSplits(List listSetRules, IntegerMatrix orderRules, int n, int p);
RcppExport SEXP _Rmergetrees_pruneSplits(SEXP listSetRulesSEXP, SEXP orderRulesSEXP, SEXP nSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type listSetRules(listSetRulesSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type orderRules(orderRulesSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(pruneSplits(listSetRules, orderRules, n, p));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rmergetrees_as_fusionTree", (DL_FUNC) &_Rmergetrees_as_fusionTree, 2},
    {"_Rmergetrees_createMergeMatrix", (DL_FUNC) &_Rmergetrees_createMergeMatrix, 2},
    {"_Rmergetrees_export_order", (DL_FUNC) &_Rmergetrees_export_order, 2},
    {"_Rmergetrees_export_merge", (DL_FUNC) &_Rmergetrees_export_merge, 2},
    {"_Rmergetrees_hcToPath_cpp", (DL_FUNC) &_Rmergetrees_hcToPath_cpp, 3},
    {"_Rmergetrees_match_func_int", (DL_FUNC) &_Rmergetrees_match_func_int, 2},
    {"_Rmergetrees_match_func_vectorInt", (DL_FUNC) &_Rmergetrees_match_func_vectorInt, 2},
    {"_Rmergetrees_pruneSplits", (DL_FUNC) &_Rmergetrees_pruneSplits, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rmergetrees(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
