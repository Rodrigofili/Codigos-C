#include <stdio.h>

int a,b,c;
int *pa = &a;
int *pb = &b;
int *pc = &c;

void triplo(int *pa, int *pb, int *pc){
  *pa = a*3;
  *pb = b*3;
  *pc = c*3;
  printf("\nTriplo: %d, %d, %d", a, b, c);
}

int main(void) {

  printf("Digite um número inteiro:");
  scanf("%d",&a);
  printf("\nDigite um número inteiro:");
  scanf("%d",&b);
  printf("\nDigite um número inteiro:");
  scanf("%d",&c);

  triplo(&a, &b, &c); 
  return 0;
}