#include <stdio.h>
#include<stdlib.h>

int main() {
  int i;
  int q;

  printf("digite um valor para q:");
  scanf("%d",&q);

  char *palavra = calloc((q+1), sizeof(char));

  for(i = 0; i<q;i++){
    printf("Digite uma letra:");
    scanf(" %c",palavra);
    palavra++;
    printf("\n");
  }
  palavra -= i;

  printf("%s",palavra);

  free(palavra);

  return 0;

}
