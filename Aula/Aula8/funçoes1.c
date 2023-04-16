#include <stdio.h>
#include <stdio.h>
#include <locale.h>


int podeDoar(char g, float p) {

  if( g =='m' && p > 60.0){
    printf("Você pode doar sangue!\n");
  }
  else if(g =='f' && p > 50.0){
    printf("Você pode doar sangue!\n");
  }
  else {
    printf("Você não pode doar sangue!\n");
  }
  
}

int main(void) {
  setlocale(LC_ALL,"Portugues");
  // entradas
  char genero;
  float peso;

  printf("Digite seu gênero (m ou f):");
  scanf(" %c",&genero);

  
  printf("Digite seu peso em kg:");
  scanf("%f",&peso);
  
  podeDoar(genero, peso);


  return 0;
}