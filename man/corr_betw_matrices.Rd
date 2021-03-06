% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/corr_betw_matrices.R
\name{corr_betw_matrices}
\alias{corr_betw_matrices}
\title{Calculate correlations between columns of two matrices}
\usage{
corr_betw_matrices(
  x,
  y,
  what = c("paired", "bestright", "bestpairs", "all"),
  corr_threshold = 0.9,
  align_rows = TRUE,
  cores = 1
)
}
\arguments{
\item{x}{A numeric matrix.}

\item{y}{A numeric matrix with the same number of rows as \code{x}.}

\item{what}{Indicates which correlations to calculate and return.  See
value, below.}

\item{corr_threshold}{Threshold on correlations if \code{what="bestpairs"}.}

\item{align_rows}{If TRUE, align the rows in the two matrices by
the row names.}

\item{cores}{Number of CPU cores to use, for parallel calculations.
(If \code{0}, use \code{\link[parallel:detectCores]{parallel::detectCores()}}.)
Alternatively, this can be links to a set of cluster sockets, as
produced by \code{\link[parallel:makeCluster]{parallel::makeCluster()}}.}
}
\value{
If \code{what="paired"}, the return value is a vector of
correlations, between columns of \code{x} and the corresponding column of
\code{y}.  \code{x} and \code{y} must have the same number of columns.

If \code{what="bestright"}, we return a data frame of size \code{ncol(x)} by
\code{3}, with the \eqn{i}th row being the maximum correlation between
column \eqn{i} of \code{x} and a column of \code{y}, and then the
\code{y}-column index and \code{y}-column name with that correlation.  (In
case of ties, we give the first one.)

If \code{what="bestpairs"}, we return a data frame with five columns,
containing all pairs of columns (with one in \code{x} and one in \code{y})
with correlation \eqn{\ge} \code{corr_threshold}.  Each row corresponds to a
column pair, and contains the correlation and then the \code{x}- and
\code{y}-column indices followed by the \code{x}- and \code{y}-column names.

If \code{what="all"}, the output is a matrix of size \code{ncol(x)} by
\code{ncol(y)}, with all correlations between columns of \code{x} and
columns of \code{y}.
}
\description{
For matrices x and y, calculate the correlation between columns of x and
columns of y.
}
\details{
Missing values (\code{NA}) are ignored, and we calculate the correlation
using all complete pairs, as in \code{\link[stats:cor]{stats::cor()}} with
\code{use="pairwise.complete.obs"}.
}
\examples{
# use the provided data, and first align the rows
aligned <- align_matrix_rows(lineup2ex$gastroc, lineup2ex$islet)

# correlations for each column in x with each in y
result_pairs <- corr_betw_matrices(aligned[[1]], aligned[[2]], "paired")

# subset columns to those with correlation > 0.75
gastroc <- lineup2ex$gastroc[,result_pairs > 0.75]
islet <- lineup2ex$islet[,result_pairs > 0.75]

# similarity matrix for the two sets of rows
# (by transposing and using what="all")
corr_betw_samples <- corr_betw_matrices(t(gastroc), t(islet), "all")

# for each column in x, find most correlated column in y
# (max in each row of result_all)
bestright <- corr_betw_matrices(t(gastroc), t(islet), "bestright")

# correlations that exceed a threshold
bestpairs <- corr_betw_matrices(t(gastroc), t(islet), "bestpairs", corr_threshold=0.8)

}
\seealso{
\code{\link[=dist_betw_matrices]{dist_betw_matrices()}}, \code{\link[=dist_betw_arrays]{dist_betw_arrays()}}
}
