#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int n,i;
	
	printf("Digite um número:");
	scanf("%d",&i);
	printf("\n");
	
	for(n = 1; n <= i; n++){
		printf("%d %d %d\n", n, n*n, n*n*n);
		printf("%d %d %d\n",n,(n*n)+1,(n*n*n)+1);
}

	system("pause");

}
