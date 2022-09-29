#include "recfib.h"

int recfib(int n){
  if (n <= 1)
    return n;
  return recfib(n-1) + recfib(n-2);
}
