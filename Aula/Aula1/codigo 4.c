#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float preco = 2.6574564750439434;
	
	printf("pre�o �: %f\n",preco);
	printf("pre�o �: %.2f\n",preco);
	printf("pre�o �: %.5f\n",preco);
	system("pause");
	return 0;
}
