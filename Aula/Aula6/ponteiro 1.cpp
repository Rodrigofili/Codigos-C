#include<stdio.h>
#include<stdlib.h>

int main(){

  char letra[6];
  char *pl;
  pl = letra;

  for(int i = 0; i<5;i++){
    printf("Digite a %dª letra:",i+1);
    scanf(" %c", pl);
    fflush(stdin);
    pl++;
  }

  for(int i = 0;i<5;i++){
    printf("Letra: %c\n",letra[i]);
  }
  return 0;
}
