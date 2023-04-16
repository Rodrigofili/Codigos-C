#include <stdio.h>
#include<stdlib.h>

int main() {
  int i;
  int *valor,maior;
  int qnt;

  printf("Digite a quantidade de valores: ");
  scanf("%d",&qnt);

   valor = malloc(qnt*sizeof(int));

   for(i = 0; i< qnt;i++){
     printf("digite os valoes:\n");
     scanf("%d",valor);
      if(*valor > maior){
      maior = *valor;
    }
      valor++;
   }
    valor -= i;
    printf("o maior valor digitado foi:%d",maior);
    free(valor);

    return 0;

}
