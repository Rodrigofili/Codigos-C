#include <stdio.h>

void Divisao(int dividendo, int divisor, int *quociente, int *resto) {
  
    int sinalQuociente = 1;
    int sinalResto = 1;
    *quociente = 0;
    *resto = 0;

  
    while (dividendo >= divisor) {
        dividendo -= divisor;
        (*quociente)++;
    }

    *quociente *= sinalQuociente;
    *resto = dividendo * sinalResto;

    printf("\nO resultado da dividsão é: %d e o resto é: %d",*quociente,*resto);
}


int main(void) {
  int dividendo;
  int divisor;
  int quociente = 0;
  int resto = 0;
  
  printf("Digite o dividendo:");
  scanf("%d",&dividendo);
  printf("\nDigite o divisor:");
  scanf("%d",&divisor);

  Divisao(dividendo,divisor, &quociente,&resto);
  
  return 0;
}