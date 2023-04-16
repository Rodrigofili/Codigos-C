#include<stdlib.h>
#include<stdio.h>

int main(){

  int n,soma = 0;
  int *pint = malloc(10*sizeof(int));

  printf("digite um numero inteiro:");
  for(n = 0; n < 10;n++){

    scanf("%d", pint+n);

    soma += *(pint+n);
  }

  for(n = 0; n < 10;n++){
    printf("A soma dos n�meros �: %d\n",soma);
  }

  free(pint);
  return 0;
}
