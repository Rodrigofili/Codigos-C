#include <stdio.h>

#define	texto "Entrada e saida de dados."

/*
Para a expressao acima é para definir um texto como constante no programa
*/


int main(){
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	
	printf("Digite o seu nome:\n");
	scanf("%s", nome);
	
	printf(" Seu nome eh: %s\n sua idade eh: %d anos.\n e sua altura eh: %.2f metros.\n", nome, idade, altura);
}
