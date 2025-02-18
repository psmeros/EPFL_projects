#ifndef CG_SEQ_H_
#define CG_SEQ_H_

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <math.h>
#include "util.h"
#include "parameters.h"
#include <cblas.h>
#include "second.h"


double cgsolver(double *A, double *b, double *x, int m, int n);
void smvm(int m, const double* val, const int* col, const int* row, const double* x, double* y);
void cgsolver_sparse( double *Aval, int *, int *, double *b, double *x, int n);

#endif /*CG_SEQ_H_*/


