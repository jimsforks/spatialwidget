// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// line_example_geojson
Rcpp::List line_example_geojson(Rcpp::DataFrame data, Rcpp::List data_types, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _spatialwidget_line_example_geojson(SEXP dataSEXP, SEXP data_typesSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type data_types(data_typesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(line_example_geojson(data, data_types, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// spatialwidget_geojson
Rcpp::List spatialwidget_geojson(Rcpp::DataFrame data, Rcpp::List data_types, Rcpp::List params, Rcpp::List defaults, Rcpp::StringMatrix colours, Rcpp::StringVector legend, Rcpp::StringVector geometry);
RcppExport SEXP _spatialwidget_spatialwidget_geojson(SEXP dataSEXP, SEXP data_typesSEXP, SEXP paramsSEXP, SEXP defaultsSEXP, SEXP coloursSEXP, SEXP legendSEXP, SEXP geometrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type data_types(data_typesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type defaults(defaultsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringMatrix >::type colours(coloursSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type legend(legendSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry(geometrySEXP);
    rcpp_result_gen = Rcpp::wrap(spatialwidget_geojson(data, data_types, params, defaults, colours, legend, geometry));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_fill_single_vector
Rcpp::List rcpp_fill_single_vector(Rcpp::List lst_defaults, Rcpp::String param_name, SEXP value, int n_rows);
RcppExport SEXP _spatialwidget_rcpp_fill_single_vector(SEXP lst_defaultsSEXP, SEXP param_nameSEXP, SEXP valueSEXP, SEXP n_rowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type lst_defaults(lst_defaultsSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type param_name(param_nameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type value(valueSEXP);
    Rcpp::traits::input_parameter< int >::type n_rows(n_rowsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_fill_single_vector(lst_defaults, param_name, value, n_rows));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_find_character_index_in_vector
int rcpp_find_character_index_in_vector(Rcpp::StringVector sv, const char* to_find);
RcppExport SEXP _spatialwidget_rcpp_find_character_index_in_vector(SEXP svSEXP, SEXP to_findSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type sv(svSEXP);
    Rcpp::traits::input_parameter< const char* >::type to_find(to_findSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_find_character_index_in_vector(sv, to_find));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_spatialwidget_line_example_geojson", (DL_FUNC) &_spatialwidget_line_example_geojson, 4},
    {"_spatialwidget_spatialwidget_geojson", (DL_FUNC) &_spatialwidget_spatialwidget_geojson, 7},
    {"_spatialwidget_rcpp_fill_single_vector", (DL_FUNC) &_spatialwidget_rcpp_fill_single_vector, 4},
    {"_spatialwidget_rcpp_find_character_index_in_vector", (DL_FUNC) &_spatialwidget_rcpp_find_character_index_in_vector, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_spatialwidget(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
