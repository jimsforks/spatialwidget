#include <Rcpp.h>
#include "spatialwidget/spatialwidget.hpp"
#include "spatialwidget/spatialwidget_defaults.hpp"
#include "spatialwidget/layers/widgetpolygon.hpp"

// [[Rcpp::export]]
Rcpp::List rcpp_widget_polygon(
    Rcpp::DataFrame data,
    Rcpp::List data_types,
    Rcpp::List params,
    Rcpp::StringVector geometry_columns ) {

  int data_rows = data.nrows();
  Rcpp::List defaults = polygon_defaults( data_rows );

  std::unordered_map< std::string, std::string > polygon_colours = spatialwidget::widgetpolygon::polygon_colours;
  Rcpp::StringVector polygon_legend = spatialwidget::widgetpolygon::polygon_legend;

  return spatialwidget::api::create_geojson(
    data,
    data_types,
    params,
    defaults,
    polygon_colours,
    polygon_legend,
    data_rows,
    geometry_columns
  );
}
