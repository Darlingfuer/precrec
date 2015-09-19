// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// calc_auc
Rcpp::List calc_auc(const Rcpp::NumericVector& xs, const Rcpp::NumericVector& ys);
RcppExport SEXP precrec_calc_auc(SEXP xsSEXP, SEXP ysSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ys(ysSEXP);
    __result = Rcpp::wrap(calc_auc(xs, ys));
    return __result;
END_RCPP
}
// calc_basic_measures
Rcpp::List calc_basic_measures(int np, int nn, const Rcpp::NumericVector& tps, const Rcpp::NumericVector& fps, const Rcpp::NumericVector& tns, const Rcpp::NumericVector& fns);
RcppExport SEXP precrec_calc_basic_measures(SEXP npSEXP, SEXP nnSEXP, SEXP tpsSEXP, SEXP fpsSEXP, SEXP tnsSEXP, SEXP fnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type np(npSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type tps(tpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type fps(fpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type tns(tnsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type fns(fnsSEXP);
    __result = Rcpp::wrap(calc_basic_measures(np, nn, tps, fps, tns, fns));
    return __result;
END_RCPP
}
// create_confusion_matrices
Rcpp::List create_confusion_matrices(const Rcpp::IntegerVector& obslabs, const Rcpp::NumericVector& ranks, const Rcpp::IntegerVector& rank_idx);
RcppExport SEXP precrec_create_confusion_matrices(SEXP obslabsSEXP, SEXP ranksSEXP, SEXP rank_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type obslabs(obslabsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ranks(ranksSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type rank_idx(rank_idxSEXP);
    __result = Rcpp::wrap(create_confusion_matrices(obslabs, ranks, rank_idx));
    return __result;
END_RCPP
}
// create_prc_curve
Rcpp::List create_prc_curve(const Rcpp::NumericVector& tps, const Rcpp::NumericVector& fps, const Rcpp::NumericVector& sn, const Rcpp::NumericVector& pr, double x_interval);
RcppExport SEXP precrec_create_prc_curve(SEXP tpsSEXP, SEXP fpsSEXP, SEXP snSEXP, SEXP prSEXP, SEXP x_intervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type tps(tpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type fps(fpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sn(snSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type pr(prSEXP);
    Rcpp::traits::input_parameter< double >::type x_interval(x_intervalSEXP);
    __result = Rcpp::wrap(create_prc_curve(tps, fps, sn, pr, x_interval));
    return __result;
END_RCPP
}
// create_roc_curve
Rcpp::List create_roc_curve(const Rcpp::NumericVector& tps, const Rcpp::NumericVector& fps, const Rcpp::NumericVector& sp, const Rcpp::NumericVector& sn, double x_interval);
RcppExport SEXP precrec_create_roc_curve(SEXP tpsSEXP, SEXP fpsSEXP, SEXP spSEXP, SEXP snSEXP, SEXP x_intervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type tps(tpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type fps(fpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sp(spSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sn(snSEXP);
    Rcpp::traits::input_parameter< double >::type x_interval(x_intervalSEXP);
    __result = Rcpp::wrap(create_roc_curve(tps, fps, sp, sn, x_interval));
    return __result;
END_RCPP
}