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
// calc_avg_curve
Rcpp::List calc_avg_curve(const Rcpp::List& curves, double x_bins, double ci_q);
RcppExport SEXP precrec_calc_avg_curve(SEXP curvesSEXP, SEXP x_binsSEXP, SEXP ci_qSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type curves(curvesSEXP);
    Rcpp::traits::input_parameter< double >::type x_bins(x_binsSEXP);
    Rcpp::traits::input_parameter< double >::type ci_q(ci_qSEXP);
    __result = Rcpp::wrap(calc_avg_curve(curves, x_bins, ci_q));
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
Rcpp::List create_confusion_matrices(const Rcpp::IntegerVector& olabs, const Rcpp::NumericVector& ranks, const Rcpp::IntegerVector& rank_idx);
RcppExport SEXP precrec_create_confusion_matrices(SEXP olabsSEXP, SEXP ranksSEXP, SEXP rank_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type olabs(olabsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ranks(ranksSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type rank_idx(rank_idxSEXP);
    __result = Rcpp::wrap(create_confusion_matrices(olabs, ranks, rank_idx));
    return __result;
END_RCPP
}
// create_prc_curve
Rcpp::List create_prc_curve(const Rcpp::NumericVector& tps, const Rcpp::NumericVector& fps, const Rcpp::NumericVector& sn, const Rcpp::NumericVector& pr, double x_bins);
RcppExport SEXP precrec_create_prc_curve(SEXP tpsSEXP, SEXP fpsSEXP, SEXP snSEXP, SEXP prSEXP, SEXP x_binsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type tps(tpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type fps(fpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sn(snSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type pr(prSEXP);
    Rcpp::traits::input_parameter< double >::type x_bins(x_binsSEXP);
    __result = Rcpp::wrap(create_prc_curve(tps, fps, sn, pr, x_bins));
    return __result;
END_RCPP
}
// create_roc_curve
Rcpp::List create_roc_curve(const Rcpp::NumericVector& tps, const Rcpp::NumericVector& fps, const Rcpp::NumericVector& sp, const Rcpp::NumericVector& sn, double x_bins);
RcppExport SEXP precrec_create_roc_curve(SEXP tpsSEXP, SEXP fpsSEXP, SEXP spSEXP, SEXP snSEXP, SEXP x_binsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type tps(tpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type fps(fpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sp(spSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sn(snSEXP);
    Rcpp::traits::input_parameter< double >::type x_bins(x_binsSEXP);
    __result = Rcpp::wrap(create_roc_curve(tps, fps, sp, sn, x_bins));
    return __result;
END_RCPP
}
// format_labels
Rcpp::List format_labels(Rcpp::NumericVector& labels);
RcppExport SEXP precrec_format_labels(SEXP labelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type labels(labelsSEXP);
    __result = Rcpp::wrap(format_labels(labels));
    return __result;
END_RCPP
}
// get_score_ranks
Rcpp::List get_score_ranks(const Rcpp::NumericVector& scores, const bool& na_last, const std::string& ties_method);
RcppExport SEXP precrec_get_score_ranks(SEXP scoresSEXP, SEXP na_lastSEXP, SEXP ties_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_last(na_lastSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type ties_method(ties_methodSEXP);
    __result = Rcpp::wrap(get_score_ranks(scores, na_last, ties_method));
    return __result;
END_RCPP
}
