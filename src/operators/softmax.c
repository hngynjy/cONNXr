#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "../embeddedml_debug.h"
#include "operators.h"

/* TODO
// Works with 1 dimension.
void xx(void *x, int dimx, int dimy)
{
  // TODO Use dimy to work with 2 dimensions.
  float sumExp = 0;
  float *xf = (float*) x;
  for (int i = 0; i < dimx; i++) {
    sumExp += exp(xf[i]);
  }

  for (int i = 0; i < dimx; i++) {
    xf[i] = exp(xf[i])/sumExp;
  }
}*/
