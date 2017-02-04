# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

.stdNumericCreate <- function(reserve = 0L) {
    .Call('stdvectors_stdNumericCreate', PACKAGE = 'stdvectors', reserve)
}

.stdNumericPushBack <- function(p, toAppend) {
    invisible(.Call('stdvectors_stdNumericPushBack', PACKAGE = 'stdvectors', p, toAppend))
}

.stdNumericSize <- function(p) {
    .Call('stdvectors_stdNumericSize', PACKAGE = 'stdvectors', p)
}

.stdNumericClear <- function(p) {
    invisible(.Call('stdvectors_stdNumericClear', PACKAGE = 'stdvectors', p))
}

.stdNumericToVector <- function(p) {
    .Call('stdvectors_stdNumericToVector', PACKAGE = 'stdvectors', p)
}

.stdNumericSubset <- function(p, indexes) {
    .Call('stdvectors_stdNumericSubset', PACKAGE = 'stdvectors', p, indexes)
}

.stdNumericClone <- function(p) {
    .Call('stdvectors_stdNumericClone', PACKAGE = 'stdvectors', p)
}

.stdIntegerCreate <- function(reserve = 0L) {
    .Call('stdvectors_stdIntegerCreate', PACKAGE = 'stdvectors', reserve)
}

.stdIntegerPushBack <- function(p, toAppend) {
    invisible(.Call('stdvectors_stdIntegerPushBack', PACKAGE = 'stdvectors', p, toAppend))
}

.stdIntegerSize <- function(p) {
    .Call('stdvectors_stdIntegerSize', PACKAGE = 'stdvectors', p)
}

.stdIntegerClear <- function(p) {
    invisible(.Call('stdvectors_stdIntegerClear', PACKAGE = 'stdvectors', p))
}

.stdIntegerToVector <- function(p) {
    .Call('stdvectors_stdIntegerToVector', PACKAGE = 'stdvectors', p)
}

.stdIntegerSubset <- function(p, indexes) {
    .Call('stdvectors_stdIntegerSubset', PACKAGE = 'stdvectors', p, indexes)
}

.stdNumericClone <- function(p) {
    .Call('stdvectors_stdIntegerClone', PACKAGE = 'stdvectors', p)
}

.stdCharacterCreate <- function(reserve = 0L) {
    .Call('stdvectors_stdCharacterCreate', PACKAGE = 'stdvectors', reserve)
}

.stdCharacterPushBack <- function(p, toAppend) {
    invisible(.Call('stdvectors_stdCharacterPushBack', PACKAGE = 'stdvectors', p, toAppend))
}

.stdCharacterSize <- function(p) {
    .Call('stdvectors_stdCharacterSize', PACKAGE = 'stdvectors', p)
}

.stdCharacterClear <- function(p) {
    invisible(.Call('stdvectors_stdCharacterClear', PACKAGE = 'stdvectors', p))
}

.stdCharacterToVector <- function(p) {
    .Call('stdvectors_stdCharacterToVector', PACKAGE = 'stdvectors', p)
}

.stdCharacterSubset <- function(p, indexes) {
    .Call('stdvectors_stdCharacterSubset', PACKAGE = 'stdvectors', p, indexes)
}

.stdCharacterClone <- function(p) {
    .Call('stdvectors_stdCharacterClone', PACKAGE = 'stdvectors', p)
}

.stdLogicalCreate <- function(reserve = 0L) {
    .Call('stdvectors_stdLogicalCreate', PACKAGE = 'stdvectors', reserve)
}

.stdLogicalPushBack <- function(p, toAppend) {
    invisible(.Call('stdvectors_stdLogicalPushBack', PACKAGE = 'stdvectors', p, toAppend))
}

.stdLogicalSize <- function(p) {
    .Call('stdvectors_stdLogicalSize', PACKAGE = 'stdvectors', p)
}

.stdLogicalClear <- function(p) {
    invisible(.Call('stdvectors_stdLogicalClear', PACKAGE = 'stdvectors', p))
}

.stdLogicalToVector <- function(p) {
    .Call('stdvectors_stdLogicalToVector', PACKAGE = 'stdvectors', p)
}

.stdLogicalSubset <- function(p, indexes) {
    .Call('stdvectors_stdLogicalSubset', PACKAGE = 'stdvectors', p, indexes)
}

.stdCharacterClone <- function(p) {
    .Call('stdvectors_stdLogicalClone', PACKAGE = 'stdvectors', p)
}

.stdListCreate <- function(reserve = 0L) {
    .Call('stdvectors_stdAnyCreate', PACKAGE = 'stdvectors', reserve)
}

.stdAnyPushBack <- function(p, toAppend) {
    invisible(.Call('stdvectors_stdAnyPushBack', PACKAGE = 'stdvectors', p, toAppend))
}

.stdAnySize <- function(p) {
    .Call('stdvectors_stdAnySize', PACKAGE = 'stdvectors', p)
}

.stdAnyClear <- function(p) {
    invisible(.Call('stdvectors_stdAnyClear', PACKAGE = 'stdvectors', p))
}

.stdAnyToVector <- function(p) {
    .Call('stdvectors_stdAnyToVector', PACKAGE = 'stdvectors', p)
}

.stdAnySubset <- function(p, indexes) {
    .Call('stdvectors_stdAnySubset', PACKAGE = 'stdvectors', p, indexes)
}

.stdAnyClone <- function(p) {
    .Call('stdvectors_stdAnyClone', PACKAGE = 'stdvectors', p)
}

.getTypeFromString <- function(type) {
    .Call('stdvectors_getTypeFromString', PACKAGE = 'stdvectors', type)
}

.getStringFromType <- function(type) {
    .Call('stdvectors_getStringFromType', PACKAGE = 'stdvectors', type)
}

stdvectorCreate <- function(type = "double", reserve = 0L) {
    .Call('stdvectors_stdvectorCreate', PACKAGE = 'stdvectors', type, reserve)
}

stdvectorPushBack <- function(sdv, values) {
    invisible(.Call('stdvectors_stdvectorPushBack', PACKAGE = 'stdvectors', sdv, values))
}

stdvectorSize <- function(sdv) {
    .Call('stdvectors_stdvectorSize', PACKAGE = 'stdvectors', sdv)
}

stdvectorClear <- function(sdv) {
    invisible(.Call('stdvectors_stdvectorClear', PACKAGE = 'stdvectors', sdv))
}

stdvectorToVector <- function(sdv) {
    .Call('stdvectors_stdvectorToVector', PACKAGE = 'stdvectors', sdv)
}

stdvectorSubset <- function(sdv, indexes) {
    .Call('stdvectors_stdvectorSubset', PACKAGE = 'stdvectors', sdv, indexes)
}

stdvectorClone <- function(sdv) {
    .Call('stdvectors_stdvectorClone', PACKAGE = 'stdvectors', sdv)
}
