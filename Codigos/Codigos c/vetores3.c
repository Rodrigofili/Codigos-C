#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(void){
  setlocale(LC_ALL, "Portuguese");
  int i, np;
  float v[np], soma=0;
  

  printf("Digitar o n�mero de posi��es do seu vetor:\n");

  scanf("%d", &np);

  for(i = 0; i < np ; i++){
    printf("\ndigite os valores do vetor:\n");
    scanf("%f", &v[i]);
    printf("Posi��o %d valor %.2f", i,v[i]);
    soma += v[i];
    
  }

    printf("\nvalor da m�dia dos valores do vetor �: %.2f", soma/np);  
}
