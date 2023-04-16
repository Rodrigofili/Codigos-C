#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float preco = 2.6574564750439434;
	
	printf("preço é: %f\n",preco);
	printf("preço é: %.2f\n",preco);
	printf("preço é: %.5f\n",preco);
	system("pause");
	return 0;
}
