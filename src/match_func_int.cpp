#include <Rcpp.h>
using namespace Rcpp;

// #ifndef MATCH_FUNC_INT_H
// #define MATCH_FUNC_INT_H

// Fonction match faite dans l'optique ou de toute facon on trouvera les elements de "x" dans ceux d'"y"
// et une seule et unique fois.

// [[Rcpp::export]]
int match_func_int(int x, IntegerVector y){
  int out; // integer de la position de x dans y
  int position = 0 ;
  int j = 0;
  while(position == 0){
    if(x == y(j)){position = 1; out = j ;}
    j++;
  }
  return out ;
}
// endif;

// Match function returning a vector
// [[Rcpp::export]]
IntegerVector match_func_vectorInt(int x, IntegerVector y){
  IntegerVector out; // integer de la position de x dans y
  for(int i=0; i<y.length(); i++){
    if(x == y(i)){out.push_back(i) ;}
  }
  return out ;
}
