#include "recfib.h"

int recfib(int n){
  if (n <= 1){
    if (n<0)
      return 0;
    return n;
  }
  return recfib(n-1) + recfib(n-2);
}
