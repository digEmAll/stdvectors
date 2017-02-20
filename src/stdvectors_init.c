#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* .Call calls */
extern SEXP stdvectors_getStringFromType(SEXP);
extern SEXP stdvectors_getTypeFromString(SEXP);
extern SEXP stdvectors_stdAnyClear(SEXP);
extern SEXP stdvectors_stdAnyClone(SEXP);
extern SEXP stdvectors_stdAnyCreate(SEXP);
extern SEXP stdvectors_stdAnyErase(SEXP, SEXP, SEXP);
extern SEXP stdvectors_stdAnyPushBack(SEXP, SEXP);
extern SEXP stdvectors_stdAnyReplace(SEXP, SEXP, SEXP);
extern SEXP stdvectors_stdAnySize(SEXP);
extern SEXP stdvectors_stdAnySubset(SEXP, SEXP);
extern SEXP stdvectors_stdAnyToVector(SEXP);
extern SEXP stdvectors_stdCharacterClear(SEXP);
extern SEXP stdvectors_stdCharacterClone(SEXP);
extern SEXP stdvectors_stdCharacterCreate(SEXP);
extern SEXP stdvectors_stdCharacterErase(SEXP, SEXP, SEXP);
extern SEXP stdvectors_stdCharacterPushBack(SEXP, SEXP);
extern SEXP stdvectors_stdCharacterReplace(SEXP, SEXP, SEXP);
extern SEXP stdvectors_stdCharacterSize(SEXP);
extern SEXP stdvectors_stdCharacterSubset(SEXP, SEXP);
extern SEXP stdvectors_stdCharacterToVector(SEXP);
extern SEXP stdvectors_stdIntegerClear(SEXP);
extern SEXP stdvectors_stdIntegerClone(SEXP);
extern SEXP stdvectors_stdIntegerCreate(SEXP);
extern SEXP stdvectors_stdIntegerErase(SEXP, SEXP, SEXP);
extern SEXP stdvectors_stdIntegerPushBack(SEXP, SEXP);
extern SEXP stdvectors_stdIntegerReplace(SEXP, SEXP, SEXP);
extern SEXP stdvectors_stdIntegerSize(SEXP);
extern SEXP stdvectors_stdIntegerSubset(SEXP, SEXP);
extern SEXP stdvectors_stdIntegerToVector(SEXP);
extern SEXP stdvectors_stdLogicalClear(SEXP);
extern SEXP stdvectors_stdLogicalClone(SEXP);
extern SEXP stdvectors_stdLogicalCreate(SEXP);
extern SEXP stdvectors_stdLogicalErase(SEXP, SEXP, SEXP);
extern SEXP stdvectors_stdLogicalPushBack(SEXP, SEXP);
extern SEXP stdvectors_stdLogicalReplace(SEXP, SEXP, SEXP);
extern SEXP stdvectors_stdLogicalSize(SEXP);
extern SEXP stdvectors_stdLogicalSubset(SEXP, SEXP);
extern SEXP stdvectors_stdLogicalToVector(SEXP);
extern SEXP stdvectors_stdNumericClear(SEXP);
extern SEXP stdvectors_stdNumericClone(SEXP);
extern SEXP stdvectors_stdNumericCreate(SEXP);
extern SEXP stdvectors_stdNumericErase(SEXP, SEXP, SEXP);
extern SEXP stdvectors_stdNumericPushBack(SEXP, SEXP);
extern SEXP stdvectors_stdNumericReplace(SEXP, SEXP, SEXP);
extern SEXP stdvectors_stdNumericSize(SEXP);
extern SEXP stdvectors_stdNumericSubset(SEXP, SEXP);
extern SEXP stdvectors_stdNumericToVector(SEXP);
extern SEXP stdvectors_stdvectorClear(SEXP);
extern SEXP stdvectors_stdvectorClone(SEXP);
extern SEXP stdvectors_stdvectorCreate(SEXP, SEXP);
extern SEXP stdvectors_stdvectorErase(SEXP, SEXP, SEXP);
extern SEXP stdvectors_stdvectorPushBack(SEXP, SEXP);
extern SEXP stdvectors_stdvectorReplace(SEXP, SEXP, SEXP);
extern SEXP stdvectors_stdvectorSize(SEXP);
extern SEXP stdvectors_stdvectorSubset(SEXP, SEXP);
extern SEXP stdvectors_stdvectorToVector(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"stdvectors_getStringFromType",    (DL_FUNC) &stdvectors_getStringFromType,    1},
    {"stdvectors_getTypeFromString",    (DL_FUNC) &stdvectors_getTypeFromString,    1},
    {"stdvectors_stdAnyClear",          (DL_FUNC) &stdvectors_stdAnyClear,          1},
    {"stdvectors_stdAnyClone",          (DL_FUNC) &stdvectors_stdAnyClone,          1},
    {"stdvectors_stdAnyCreate",         (DL_FUNC) &stdvectors_stdAnyCreate,         1},
    {"stdvectors_stdAnyErase",          (DL_FUNC) &stdvectors_stdAnyErase,          3},
    {"stdvectors_stdAnyPushBack",       (DL_FUNC) &stdvectors_stdAnyPushBack,       2},
    {"stdvectors_stdAnyReplace",        (DL_FUNC) &stdvectors_stdAnyReplace,        3},
    {"stdvectors_stdAnySize",           (DL_FUNC) &stdvectors_stdAnySize,           1},
    {"stdvectors_stdAnySubset",         (DL_FUNC) &stdvectors_stdAnySubset,         2},
    {"stdvectors_stdAnyToVector",       (DL_FUNC) &stdvectors_stdAnyToVector,       1},
    {"stdvectors_stdCharacterClear",    (DL_FUNC) &stdvectors_stdCharacterClear,    1},
    {"stdvectors_stdCharacterClone",    (DL_FUNC) &stdvectors_stdCharacterClone,    1},
    {"stdvectors_stdCharacterCreate",   (DL_FUNC) &stdvectors_stdCharacterCreate,   1},
    {"stdvectors_stdCharacterErase",    (DL_FUNC) &stdvectors_stdCharacterErase,    3},
    {"stdvectors_stdCharacterPushBack", (DL_FUNC) &stdvectors_stdCharacterPushBack, 2},
    {"stdvectors_stdCharacterReplace",  (DL_FUNC) &stdvectors_stdCharacterReplace,  3},
    {"stdvectors_stdCharacterSize",     (DL_FUNC) &stdvectors_stdCharacterSize,     1},
    {"stdvectors_stdCharacterSubset",   (DL_FUNC) &stdvectors_stdCharacterSubset,   2},
    {"stdvectors_stdCharacterToVector", (DL_FUNC) &stdvectors_stdCharacterToVector, 1},
    {"stdvectors_stdIntegerClear",      (DL_FUNC) &stdvectors_stdIntegerClear,      1},
    {"stdvectors_stdIntegerClone",      (DL_FUNC) &stdvectors_stdIntegerClone,      1},
    {"stdvectors_stdIntegerCreate",     (DL_FUNC) &stdvectors_stdIntegerCreate,     1},
    {"stdvectors_stdIntegerErase",      (DL_FUNC) &stdvectors_stdIntegerErase,      3},
    {"stdvectors_stdIntegerPushBack",   (DL_FUNC) &stdvectors_stdIntegerPushBack,   2},
    {"stdvectors_stdIntegerReplace",    (DL_FUNC) &stdvectors_stdIntegerReplace,    3},
    {"stdvectors_stdIntegerSize",       (DL_FUNC) &stdvectors_stdIntegerSize,       1},
    {"stdvectors_stdIntegerSubset",     (DL_FUNC) &stdvectors_stdIntegerSubset,     2},
    {"stdvectors_stdIntegerToVector",   (DL_FUNC) &stdvectors_stdIntegerToVector,   1},
    {"stdvectors_stdLogicalClear",      (DL_FUNC) &stdvectors_stdLogicalClear,      1},
    {"stdvectors_stdLogicalClone",      (DL_FUNC) &stdvectors_stdLogicalClone,      1},
    {"stdvectors_stdLogicalCreate",     (DL_FUNC) &stdvectors_stdLogicalCreate,     1},
    {"stdvectors_stdLogicalErase",      (DL_FUNC) &stdvectors_stdLogicalErase,      3},
    {"stdvectors_stdLogicalPushBack",   (DL_FUNC) &stdvectors_stdLogicalPushBack,   2},
    {"stdvectors_stdLogicalReplace",    (DL_FUNC) &stdvectors_stdLogicalReplace,    3},
    {"stdvectors_stdLogicalSize",       (DL_FUNC) &stdvectors_stdLogicalSize,       1},
    {"stdvectors_stdLogicalSubset",     (DL_FUNC) &stdvectors_stdLogicalSubset,     2},
    {"stdvectors_stdLogicalToVector",   (DL_FUNC) &stdvectors_stdLogicalToVector,   1},
    {"stdvectors_stdNumericClear",      (DL_FUNC) &stdvectors_stdNumericClear,      1},
    {"stdvectors_stdNumericClone",      (DL_FUNC) &stdvectors_stdNumericClone,      1},
    {"stdvectors_stdNumericCreate",     (DL_FUNC) &stdvectors_stdNumericCreate,     1},
    {"stdvectors_stdNumericErase",      (DL_FUNC) &stdvectors_stdNumericErase,      3},
    {"stdvectors_stdNumericPushBack",   (DL_FUNC) &stdvectors_stdNumericPushBack,   2},
    {"stdvectors_stdNumericReplace",    (DL_FUNC) &stdvectors_stdNumericReplace,    3},
    {"stdvectors_stdNumericSize",       (DL_FUNC) &stdvectors_stdNumericSize,       1},
    {"stdvectors_stdNumericSubset",     (DL_FUNC) &stdvectors_stdNumericSubset,     2},
    {"stdvectors_stdNumericToVector",   (DL_FUNC) &stdvectors_stdNumericToVector,   1},
    {"stdvectors_stdvectorClear",       (DL_FUNC) &stdvectors_stdvectorClear,       1},
    {"stdvectors_stdvectorClone",       (DL_FUNC) &stdvectors_stdvectorClone,       1},
    {"stdvectors_stdvectorCreate",      (DL_FUNC) &stdvectors_stdvectorCreate,      2},
    {"stdvectors_stdvectorErase",       (DL_FUNC) &stdvectors_stdvectorErase,       3},
    {"stdvectors_stdvectorPushBack",    (DL_FUNC) &stdvectors_stdvectorPushBack,    2},
    {"stdvectors_stdvectorReplace",     (DL_FUNC) &stdvectors_stdvectorReplace,     3},
    {"stdvectors_stdvectorSize",        (DL_FUNC) &stdvectors_stdvectorSize,        1},
    {"stdvectors_stdvectorSubset",      (DL_FUNC) &stdvectors_stdvectorSubset,      2},
    {"stdvectors_stdvectorToVector",    (DL_FUNC) &stdvectors_stdvectorToVector,    1},
    {NULL, NULL, 0}
};

void R_init_stdvectors(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
