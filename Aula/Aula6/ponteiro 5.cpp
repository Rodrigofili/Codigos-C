#include<stdio.h>
#include<stdlib.h>

int main(){

  float v[3][3];
  float *pv = v;


  for(int i = 0; i<3;i++){
    printf("Digite o %dª número:",i+1);
    scanf(" %f", pv);
    fflush(stdin);
    pv++;
  }

  for(int i = 0; i<3;i++){
    if(i == 3-1){
      printf("\n");
    }
    printf("%f",);
  }
  return 0;
}
