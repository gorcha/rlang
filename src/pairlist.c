#include <Rinternals.h>

SEXP car_(SEXP x) {
  return CAR(x);
}
SEXP cdr_(SEXP x) {
  return CDR(x);
}
SEXP cadr_(SEXP x) {
  return CADR(x);
}
SEXP cddr_(SEXP x) {
  return CDDR(x);
}

SEXP set_car_(SEXP x, SEXP newcar) {
  SETCAR(x, newcar);
  return x;
}
SEXP set_cdr_(SEXP x, SEXP newcdr) {
  SETCDR(x, newcdr);
  return x;
}
SEXP set_cadr_(SEXP x, SEXP newcar) {
  SETCADR(x, newcar);
  return x;
}
SEXP set_cddr_(SEXP x, SEXP newcdr) {
  SEXP cdr = CDR(x);
  SETCDR(cdr, newcdr);
  return x;
}

SEXP cons_(SEXP car, SEXP cdr) {
  return CONS(car, cdr);
}

SEXP duplicate_(SEXP x) {
  return Rf_duplicate(x);
}

SEXP tag_(SEXP x) {
  return TAG(x);
}
SEXP set_tag_(SEXP x, SEXP tag) {
  SET_TAG(x, tag);
  return x;
}