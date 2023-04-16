#include<stdio.h>
#include<stdlib.h>

int main(){

  int v[5];
  int *pv = v;


  for(int i = 0; i<5;i++){
    printf("Digite o %dª número:",i+1);
    scanf(" %d", pv);
    fflush(stdin);
    pv++;
  }

  printf("Dobro dos valores digitados:");
  printf("[ %d %d %d %d %d ]",*(pv-5)*2,*(pv-4)*2,*(pv-3)*2,*(pv-2)*2,*(pv-1)*2);

  return 0;
}
