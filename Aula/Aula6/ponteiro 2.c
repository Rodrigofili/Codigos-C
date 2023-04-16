#include<stdio.h>
#include<stdlib.h>

int main(){

	float a, b, *pA = &a, *pB = &b;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", pA);
	printf("Digite o segundo valor: ");
	scanf("%f", pB);
	
	printf("A soma do %.2f + %.2f = %.2f\n", *pA, *pB, *pA+*pB);
	
	system("pause");
	
	return 0;
	
}
