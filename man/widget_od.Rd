% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/spatial_widget.R
\name{widget_od}
\alias{widget_od}
\title{Widget OD}
\usage{
widget_od(
  data,
  origin,
  destination,
  fill_colour = NULL,
  fill_opacity = NULL,
  legend = TRUE,
  json_legend = TRUE,
  digits = 6
)
}
\arguments{
\item{data}{\code{sf} object}

\item{origin}{string specifying the column of \code{data} containing the origin geometry}

\item{destination}{string specifying the column of \code{data} containing the destination geometry}

\item{fill_colour}{string specifying column of \code{sf} to use for the fill colour,
or a single value to apply to all rows of data}

\item{fill_opacity}{string specifying column of \code{sf} to use for the fill opacity,
or a single value to apply to all rows of data}

\item{legend}{logical indicating if legend data will be returned}

\item{json_legend}{logical indicating if the legend will be returned as json}

\item{digits}{number of decimal places for rounding lon o& lat coordinates. Default 6}
}
\description{
Converts an `sf` object with two POINT geometriers into JSON for plotting in an htmlwidget
}
\examples{

l <- widget_od( data = widget_arcs, origin = "origin", destination = "destination", legend = FALSE )

}
