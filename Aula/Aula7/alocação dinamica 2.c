#include <stdio.h>
#include<stdlib.h>

int main() {
  int i;
  float *notas,soma = 0;
  int qnt;


  printf("Digite a quantidade de alunos: ");
  scanf("%d",&qnt);

   notas = malloc(qnt*sizeof(float));

   for(i = 0; i< qnt;i++){
     printf("digite as notas:\n");
     scanf("%f",notas);
     soma += *notas;
     notas++;
   }
    notas -= i;
    printf("A m�dia aritim�tica os varlores �: %f",soma/qnt);

    free(notas);

    return 0;

}
