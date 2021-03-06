% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/get_problems.R
\name{get_problems}
\alias{get_problems}
\title{Summarize potential problems in a distance matrix}
\usage{
get_problems(
  d,
  dimension = c("row", "column"),
  get_min = TRUE,
  subset = c("problems", "all"),
  threshold = 0
)
}
\arguments{
\item{d}{A distance or similarity matrix}

\item{dimension}{Whether to determine the best distances within rows or columns}

\item{get_min}{If TRUE, get the minimum (for a distance matrix);
if FALSE, get the maximum (for a similarity matrix)}

\item{subset}{Whether to return just the rows with potential problems, or all of the rows.}

\item{threshold}{If \code{subset="problems"}, the threshold on the difference between the self and best distances.}
}
\value{
A data frame containing individual ID, distance to self,
best distance and corresponding individual, 2nd best distance
and the corresponding individual.
}
\description{
For the inviduals represented in a distance matrix, collect the
self-self, best, and 2nd best distances, and summarize the results
in a data frame.
}
\examples{
# align rows in the provided dataset, lineup2ex
aligned <- align_matrix_rows(lineup2ex$gastroc, lineup2ex$islet)
# find correlated columns
selected_genes <- (corr_betw_matrices(aligned[[1]], aligned[[2]], "paired") > 0.75)
# calculate correlation between rows
similarity <- corr_betw_matrices(t(lineup2ex$gastroc[,selected_genes]),
                                 t(lineup2ex$islet[,selected_genes]), "all")
# pull out the problems, looking by row (where best > self + 0.3)
problems_byrow <- get_problems(similarity, get_min=FALSE, threshold=0.3)

# pull out the problems, looking by column (where best > self + 0.3)
problems_bycol <- get_problems(similarity, get_min=FALSE, threshold=0.3,
                               dimension="column")

}
\seealso{
\code{\link[=get_self]{get_self()}}, \code{\link[=get_best]{get_best()}}, \code{\link[=get_2ndbest]{get_2ndbest()}}, \code{\link[=which_best]{which_best()}}, \code{\link[=get_nonself]{get_nonself()}}
}
