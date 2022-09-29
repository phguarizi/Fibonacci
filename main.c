// Fibonacci - for e recursiva


#include <stdio.h>
#include "recfib.h"

int main(){

  int n = 5, fib = 1, aux1 = 0, aux2 = 1, i;
  // obs: n foi iniciado em 5 apenas como controle
  printf("Insira o termo da sequencia de Fibonacci que busca: \n");
  scanf("%d", &n);

  for (i=3;i<=n;i++){
    aux1 = aux2;
    aux2 = fib;
    fib = aux1+aux2;

  }

  printf("Por for: Fib= %d\nPor recursiva: Fib= %d\n", fib, recfib(n));

  return 0;
}
