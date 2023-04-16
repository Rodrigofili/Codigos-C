#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(void){
  setlocale(LC_ALL, "Portuguese");
  int i, np;
  float v[np], soma=0;
  

  printf("Digitar o número de posições do seu vetor:\n");

  scanf("%d", &np);

  for(i = 0; i < np ; i++){
    printf("\ndigite os valores do vetor:\n");
    scanf("%f", &v[i]);
    printf("Posição %d valor %.2f", i,v[i]);
    soma += v[i];
    
  }

    printf("\nvalor da média dos valores do vetor é: %.2f", soma/np);  
}
