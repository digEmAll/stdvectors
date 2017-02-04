#include <Rcpp.h>


/************************* NUMERIC *************************/
// [[Rcpp::export(rng=false,name=".stdNumericCreate")]]
SEXP stdNumericCreate(int reserve = 0){
  std::vector<double>* v = new std::vector<double>();
  if(reserve > 0)
    v->reserve(reserve);
  Rcpp::XPtr< std::vector<double> > p(v, true);
  return( p );
}

// [[Rcpp::export(rng=false,name=".stdNumericPushBack")]]
void stdNumericPushBack(SEXP p, Rcpp::NumericVector toAppend){
  Rcpp::XPtr< std::vector<double> > ptr(p);
  int len = toAppend.length();
  for(int i = 0; i < len; i++){
    ptr->push_back(toAppend[i]);
  }
}

// [[Rcpp::export(rng=false,name=".stdNumericSize")]]
int stdNumericSize(SEXP p){
  Rcpp::XPtr< std::vector<double> > ptr(p);
  return ptr->size();
}

// [[Rcpp::export(rng=false,name=".stdNumericClear")]]
void stdNumericClear(SEXP p){
  Rcpp::XPtr< std::vector<double> > ptr(p);
  ptr->clear();
}

// [[Rcpp::export(rng=false,name=".stdNumericToVector")]]
Rcpp::NumericVector stdNumericToVector(SEXP p){
  Rcpp::XPtr< std::vector<double> > ptr(p);
  Rcpp::NumericVector output(ptr->size());
  std::copy(ptr->begin(),ptr->end(),output.begin());
  return output;
}

// [[Rcpp::export(rng=false,name=".stdNumericSubset")]]
Rcpp::NumericVector stdNumericSubset(SEXP p, Rcpp::IntegerVector indexes){
  Rcpp::XPtr< std::vector<double> > ptr(p);
  Rcpp::NumericVector output(indexes.length());
  for(int i = 0;i < indexes.length(); i++){
    int index = indexes[i] - 1;
    output[i] = ptr->at(index);
  }
  return output;
}

// [[Rcpp::export(rng=false,name=".stdNumericClone")]]
SEXP stdNumericClone(SEXP p){
  Rcpp::XPtr< std::vector<double> > ptr(p);
  std::vector<double>* clone = new std::vector<double>(*ptr);
  Rcpp::XPtr< std::vector<double> > pClone(clone, true);
  return pClone;
}


/************************* INTEGER *************************/
// [[Rcpp::export(rng=false,name=".stdIntegerCreate")]]
SEXP stdIntegerCreate(int reserve = 0){
  std::vector<int>* v = new std::vector<int>();
  if(reserve > 0)
    v->reserve(reserve);
  Rcpp::XPtr< std::vector<int> > p(v, true);
  return( p );
}

// [[Rcpp::export(rng=false,name=".stdIntegerPushBack")]]
void stdIntegerPushBack(SEXP p, Rcpp::IntegerVector toAppend){
  Rcpp::XPtr< std::vector<int> > ptr(p);
  int len = toAppend.length();
  for(int i = 0; i < len; i++){
    ptr->push_back(toAppend[i]);
  }
}

// [[Rcpp::export(rng=false,name=".stdIntegerSize")]]
int stdIntegerSize(SEXP p){
  Rcpp::XPtr< std::vector<int> > ptr(p);
  return ptr->size();
}

// [[Rcpp::export(rng=false,name=".stdIntegerClear")]]
void stdIntegerClear(SEXP p){
  Rcpp::XPtr< std::vector<int> > ptr(p);
  ptr->clear();
}

// [[Rcpp::export(rng=false,name=".stdIntegerToVector")]]
Rcpp::IntegerVector stdIntegerToVector(SEXP p){
  Rcpp::XPtr< std::vector<int> > ptr(p);
  Rcpp::IntegerVector output(ptr->size());
  std::copy(ptr->begin(),ptr->end(),output.begin());
  return output;
}

// [[Rcpp::export(rng=false,name=".stdIntegerSubset")]]
Rcpp::IntegerVector stdIntegerSubset(SEXP p, Rcpp::IntegerVector indexes){
  Rcpp::XPtr< std::vector<int> > ptr(p);
  Rcpp::IntegerVector output(indexes.length());
  for(int i = 0;i < indexes.length(); i++){
    int index = indexes[i] - 1;
    output[i] = ptr->at(index);
  }
  return output;
}

// [[Rcpp::export(rng=false,name=".stdNumericClone")]]
SEXP stdIntegerClone(SEXP p){
  Rcpp::XPtr< std::vector<int> > ptr(p);
  std::vector<int>* clone = new std::vector<int>(*ptr);
  Rcpp::XPtr< std::vector<int> > pClone(clone, true);
  return pClone;
}


/************************* CHARACTER *************************/
// [[Rcpp::export(rng=false,name=".stdCharacterCreate")]]
SEXP stdCharacterCreate(int reserve = 0){
  std::vector<std::string>* v = new std::vector<std::string>();
  if(reserve > 0)
    v->reserve(reserve);
  Rcpp::XPtr< std::vector<std::string> > p(v, true);
  return( p );
}

// [[Rcpp::export(rng=false,name=".stdCharacterPushBack")]]
void stdCharacterPushBack(SEXP p, Rcpp::CharacterVector toAppend){
  Rcpp::XPtr< std::vector<std::string> > ptr(p);
  int len = toAppend.length();
  for(int i = 0; i < len; i++){
    ptr->push_back(std::string(toAppend[i]));
  }
}

// [[Rcpp::export(rng=false,name=".stdCharacterSize")]]
int stdCharacterSize(SEXP p){
  Rcpp::XPtr< std::vector<std::string> > ptr(p);
  return ptr->size();
}

// [[Rcpp::export(rng=false,name=".stdCharacterClear")]]
void stdCharacterClear(SEXP p){
  Rcpp::XPtr< std::vector<std::string> > ptr(p);
  ptr->clear();
}

// [[Rcpp::export(rng=false,name=".stdCharacterToVector")]]
Rcpp::CharacterVector stdCharacterToVector(SEXP p){
  Rcpp::XPtr< std::vector<std::string> > ptr(p);
  Rcpp::CharacterVector output(ptr->size());
  std::copy(ptr->begin(),ptr->end(),output.begin());
  return output;
}

// [[Rcpp::export(rng=false,name=".stdCharacterSubset")]]
Rcpp::CharacterVector stdCharacterSubset(SEXP p, Rcpp::IntegerVector indexes){
  Rcpp::XPtr< std::vector<std::string> > ptr(p);
  Rcpp::CharacterVector output(indexes.length());
  for(int i = 0;i < indexes.length(); i++){
    int index = indexes[i] - 1;
    output[i] = ptr->at(index);
  }
  return output;
}

// [[Rcpp::export(rng=false,name=".stdCharacterClone")]]
SEXP stdCharacterClone(SEXP p){
  Rcpp::XPtr< std::vector<std::string> > ptr(p);
  std::vector<std::string>* clone = new std::vector<std::string>(*ptr);
  Rcpp::XPtr< std::vector<std::string> > pClone(clone, true);
  return pClone;
}


/************************* LOGICAL *************************/
// [[Rcpp::export(rng=false,name=".stdLogicalCreate")]]
SEXP stdLogicalCreate(int reserve = 0){
  std::vector<int>* v = new std::vector<int>();
  if(reserve > 0)
    v->reserve(reserve);
  Rcpp::XPtr< std::vector<int> > p(v, true);
  return( p );
}

// [[Rcpp::export(rng=false,name=".stdLogicalPushBack")]]
void stdLogicalPushBack(SEXP p, Rcpp::LogicalVector toAppend){
  Rcpp::XPtr< std::vector<int> > ptr(p);
  int len = toAppend.length();
  for(int i = 0; i < len; i++){
    ptr->push_back(toAppend[i]);
  }
}

// [[Rcpp::export(rng=false,name=".stdLogicalSize")]]
int stdLogicalSize(SEXP p){
  Rcpp::XPtr< std::vector<int> > ptr(p);
  return ptr->size();
}

// [[Rcpp::export(rng=false,name=".stdLogicalClear")]]
void stdLogicalClear(SEXP p){
  Rcpp::XPtr< std::vector<int> > ptr(p);
  ptr->clear();
}

// [[Rcpp::export(rng=false,name=".stdLogicalToVector")]]
Rcpp::LogicalVector stdLogicalToVector(SEXP p){
  Rcpp::XPtr< std::vector<int> > ptr(p);
  Rcpp::LogicalVector output(ptr->size());
  std::copy(ptr->begin(),ptr->end(),output.begin());
  return output;
}

// [[Rcpp::export(rng=false,name=".stdLogicalSubset")]]
Rcpp::LogicalVector stdLogicalSubset(SEXP p, Rcpp::IntegerVector indexes){
  Rcpp::XPtr< std::vector<int> > ptr(p);
  Rcpp::LogicalVector output(indexes.length());
  for(int i = 0;i < indexes.length(); i++){
    int index = indexes[i] - 1;
    output[i] = ptr->at(index);
  }
  return output;
}

// [[Rcpp::export(rng=false,name=".stdCharacterClone")]]
SEXP stdLogicalClone(SEXP p){
  Rcpp::XPtr< std::vector<int> > ptr(p);
  std::vector<int>* clone = new std::vector<int>(*ptr);
  Rcpp::XPtr< std::vector<int> > pClone(clone, true);
  return pClone;
}

/************************* ANY *************************/
// [[Rcpp::export(rng=false,name=".stdListCreate")]]
SEXP stdAnyCreate(int reserve = 0){
  std::vector<Rcpp::RObject>* v = new std::vector<Rcpp::RObject>();
  if(reserve > 0)
    v->reserve(reserve);
  Rcpp::XPtr< std::vector<Rcpp::RObject> > p(v, true);
  return( p );
}

// CAUTION here SEXP toAppend will be simply added to the list without assuming 
// it's, in turn, a list of object that we want to add
// [[Rcpp::export(rng=false,name=".stdAnyPushBack")]]
void stdAnyPushBack(SEXP p, SEXP toAppend){
  Rcpp::XPtr< std::vector<Rcpp::RObject> > ptr(p);
  ptr->push_back(Rcpp::RObject(toAppend));
}

// [[Rcpp::export(rng=false,name=".stdAnySize")]]
int stdAnySize(SEXP p){
  Rcpp::XPtr< std::vector<Rcpp::RObject> > ptr(p);
  return ptr->size();
}

// [[Rcpp::export(rng=false,name=".stdAnyClear")]]
void stdAnyClear(SEXP p){
  Rcpp::XPtr< std::vector<Rcpp::RObject> > ptr(p);
  ptr->clear();
}

// [[Rcpp::export(rng=false,name=".stdAnyToVector")]]
Rcpp::List stdAnyToVector(SEXP p){
  Rcpp::XPtr< std::vector<Rcpp::RObject> > ptr(p);
  Rcpp::List output(ptr->size());
  std::copy(ptr->begin(),ptr->end(),output.begin());
  return output;
}

// [[Rcpp::export(rng=false,name=".stdAnySubset")]]
Rcpp::List stdAnySubset(SEXP p, Rcpp::IntegerVector indexes){
  Rcpp::XPtr< std::vector<Rcpp::RObject> > ptr(p);
  Rcpp::List output(indexes.length());
  for(int i = 0;i < indexes.length(); i++){
    int index = indexes[i] - 1;
    output[i] = ptr->at(index);
  }
  return output;
}

// [[Rcpp::export(rng=false,name=".stdAnyClone")]]
SEXP stdAnyClone(SEXP p){
  Rcpp::XPtr< std::vector<Rcpp::RObject> > ptr(p);
  std::vector<Rcpp::RObject>* clone = new std::vector<Rcpp::RObject>(*ptr);
  Rcpp::XPtr< std::vector<Rcpp::RObject> > pClone(clone, true);
  return pClone;
}


/************************* GENERIC *************************/

// [[Rcpp::export(rng=false,name=".getTypeFromString")]]
int getTypeFromString(std::string type){
  if(type == "double" || type == "numeric")
    return REALSXP;
  if (type == "integer")
    return INTSXP;
  if(type == "character")
    return STRSXP;
  if(type == "logical")
    return LGLSXP;
  if(type == "any")
    return ANYSXP;
  Rcpp::stop("Unsupported type: only 'integer', 'numeric', 'logical', 'character' and 'any' types are supported");
  
  return 0;
}

// [[Rcpp::export(rng=false,name=".getStringFromType")]]
SEXP getStringFromType(int type){
  
  switch(type)
  {
  case INTSXP:
    return Rcpp::wrap(std::string("integer"));
  case REALSXP:
    return Rcpp::wrap(std::string("double"));
  case STRSXP:
    return Rcpp::wrap(std::string("character"));
  case LGLSXP:
    return Rcpp::wrap(std::string("logical"));
  case ANYSXP:
    return Rcpp::wrap(std::string("any"));
  default:
    Rcpp::stop("Unsupported type: only 'integer', 'numeric', 'logical', 'character' and 'any' types are supported");
  }
  return R_NilValue;
}

// [[Rcpp::export(rng=false)]]
SEXP stdvectorCreate(std::string type = "double",int reserve = 0){
  int typeInt = getTypeFromString(type);
  SEXP p;
  switch(typeInt)
  {
  case INTSXP:
    p = stdIntegerCreate(reserve);
    break;
  case REALSXP:
    p = stdNumericCreate(reserve);
    break;
  case STRSXP:
    p = stdCharacterCreate(reserve);
    break;
  case LGLSXP:
    p = stdLogicalCreate(reserve);
    break;
  case ANYSXP:
    p = stdAnyCreate(reserve);
    break;
  default:
    Rcpp::stop("Unsupported type: only 'integer', 'numeric', 'logical', 'character' and 'any' types are supported");
  }
  Rcpp::List list = Rcpp::List::create(Rcpp::Named("ptr") = p,
                                       Rcpp::Named("type") = typeInt);
  list.attr("class") = "stdvector";
  return(list);
}

// [[Rcpp::export(rng=false)]]
void stdvectorPushBack(Rcpp::List sdv, SEXP values){
  int type = Rcpp::as<int>(sdv[1]);  
  switch(type)
  {
  case INTSXP:
    stdIntegerPushBack(sdv[0],Rcpp::as<Rcpp::IntegerVector>(values));
    break;
  case REALSXP:
    stdNumericPushBack(sdv[0],Rcpp::as<Rcpp::NumericVector>(values));
    break;
  case STRSXP:
    stdCharacterPushBack(sdv[0],Rcpp::as<Rcpp::CharacterVector>(values));
    break;
  case LGLSXP:
    stdLogicalPushBack(sdv[0],Rcpp::as<Rcpp::LogicalVector>(values));
    break;
  case ANYSXP:
    stdAnyPushBack(sdv[0],values);
    break;    
  default:
    Rcpp::stop("Unsupported type: only 'integer', 'numeric', 'logical', 'character' and 'any' types are supported");
  }
}

// [[Rcpp::export(rng=false)]]
int stdvectorSize(Rcpp::List sdv){
  int type = Rcpp::as<int>(sdv[1]);  
  switch(type)
  {
  case INTSXP:
    return stdIntegerSize(sdv[0]);
  case REALSXP:
    return stdNumericSize(sdv[0]);
  case STRSXP:
    return stdCharacterSize(sdv[0]);
  case LGLSXP:
    return stdLogicalSize(sdv[0]);
  case ANYSXP:
    return stdAnySize(sdv[0]);
  default:
    Rcpp::stop("Unsupported type: only 'integer', 'numeric', 'logical', 'character' and 'any' types are supported");
  }
  return 0;
}

// [[Rcpp::export(rng=false)]]
void stdvectorClear(Rcpp::List sdv){
  int type = Rcpp::as<int>(sdv[1]);  
  switch(type)
  {
  case INTSXP:
    stdIntegerClear(sdv[0]);
    break;
  case REALSXP:
    stdNumericClear(sdv[0]);
    break;
  case STRSXP:
    stdCharacterClear(sdv[0]);
    break;
  case LGLSXP:
    stdLogicalClear(sdv[0]);
    break;
  case ANYSXP:
    stdAnyClear(sdv[0]);
    break;
  default:
    Rcpp::stop("Unsupported type: only 'integer', 'numeric', 'logical', 'character' and 'any' types are supported");
  }
}

// [[Rcpp::export(rng=false)]]
SEXP stdvectorToVector(Rcpp::List sdv){
  int type = Rcpp::as<int>(sdv[1]); 
  switch(type)
  {
  case INTSXP:
    return stdIntegerToVector(sdv[0]);
  case REALSXP:
    return stdNumericToVector(sdv[0]);
  case STRSXP:
    return stdCharacterToVector(sdv[0]);
  case LGLSXP:
    return stdLogicalToVector(sdv[0]);
  case ANYSXP:
    return stdAnyToVector(sdv[0]);
  default:
    Rcpp::stop("Unsupported type: only integer, numeric, logical and character types are supported");
  }
  
  return R_NilValue;
}


// [[Rcpp::export(rng=false)]]
SEXP stdvectorSubset(Rcpp::List sdv, Rcpp::IntegerVector indexes){
  int type = Rcpp::as<int>(sdv[1]);
  switch(type)
  {
  case INTSXP:
    return stdIntegerSubset(sdv[0],indexes);
  case REALSXP:
    return stdNumericSubset(sdv[0],indexes);
  case STRSXP:
    return stdCharacterSubset(sdv[0],indexes);
  case LGLSXP:
    return stdLogicalSubset(sdv[0],indexes);
  case ANYSXP:
    return stdAnySubset(sdv[0],indexes);
  default:
    Rcpp::stop("Unsupported type: only 'integer', 'numeric', 'logical', 'character' and 'any' types are supported");
  }
  
  return R_NilValue;
}

// [[Rcpp::export(rng=false)]]
SEXP stdvectorClone(Rcpp::List sdv){
 
  SEXP p;
  int type = Rcpp::as<int>(sdv[1]); 
  switch(type)
  {
  case INTSXP:
    p = stdIntegerClone(sdv[0]);
    break;
  case REALSXP:
    p = stdNumericClone(sdv[0]);
    break;
  case STRSXP:
    p = stdCharacterClone(sdv[0]);
    break;
  case LGLSXP:
    p = stdLogicalClone(sdv[0]);
    break;
  case ANYSXP:
    p = stdAnyClone(sdv[0]);
    break;
  default:
    Rcpp::stop("Unsupported type: only 'integer', 'numeric', 'logical', 'character' and 'any' types are supported");
  }
  
  Rcpp::List list = Rcpp::List::create(Rcpp::Named("ptr") = p, 
                                       Rcpp::Named("type") = type);
  list.attr("class") = "stdvector";  
  return list;
}


