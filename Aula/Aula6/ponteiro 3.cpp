#include<stdio.h>
#include<stdlib.h>

int main(){

  char letra[6];
  char *pl = letra;


  for(int i = 0; i<5;i++){
    printf("Digite a %dª letra:",i+1);
    scanf(" %c", pl);
    fflush(stdin);
    pl++;
  }


    printf("Letra: %c %c %c %c %c %c",*(pl-6),*(pl-5),*(pl-4),*(pl-3),*(pl-2),*(pl-1));

  return 0;
}
