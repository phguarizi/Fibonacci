// Fibonacci - for


#include <stdio.h>

int main(){

  int n = 6, fib = 1, aux1 = 0, aux2 = 1, i;

  printf("Insira o termo da sequencia de Fibonacci que busca: \n");
  scanf("%d", &n);

  for (i=3;i<=n;i++){
    aux1 = aux2;
    aux2 = fib;
    fib = aux1+aux2;

  }

  printf("Fib= %d\n", fib);

  return 0;
}
