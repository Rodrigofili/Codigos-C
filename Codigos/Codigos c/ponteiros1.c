#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a,b;
	int *pA = &a;

	a = 5;
	
	b = *pA;
	
	printf("O valor de b é %d\n",b);
	
	system("pause");
}
