#include<stdio.h>
#include<stdlib.h>

int main(){

	int a, b, *pA = &a, *pB = &b, maior;

	printf("Digite o primeiro valor: ");
	scanf("%d", pA);
	printf("Digite o segundo valor: ");
	scanf("%d", pB);

	if(pA > pB){
		maior = pA;
	}
	
	else{
		maior = pB;
	}

	printf("O maior valor de endereço é %p",maior);
	printf("\n");
	printf("A %p\n",pA);
	printf("B %p\n",pB);

	system("pause");

	return 0;

}
