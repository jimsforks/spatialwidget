// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// line_example_geojson
Rcpp::List line_example_geojson(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _spatialwidget_line_example_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(line_example_geojson(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// spatialwidget_geojson
Rcpp::List spatialwidget_geojson(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List defaults, Rcpp::StringMatrix colours, Rcpp::StringVector legend, Rcpp::StringVector geometry);
RcppExport SEXP _spatialwidget_spatialwidget_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP defaultsSEXP, SEXP coloursSEXP, SEXP legendSEXP, SEXP geometrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type defaults(defaultsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringMatrix >::type colours(coloursSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type legend(legendSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry(geometrySEXP);
    rcpp_result_gen = Rcpp::wrap(spatialwidget_geojson(data, params, defaults, colours, legend, geometry));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_spatialwidget_line_example_geojson", (DL_FUNC) &_spatialwidget_line_example_geojson, 3},
    {"_spatialwidget_spatialwidget_geojson", (DL_FUNC) &_spatialwidget_spatialwidget_geojson, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_spatialwidget(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
