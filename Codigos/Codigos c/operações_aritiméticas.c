#include <stdio.h>

 
int main(){
	
	int Dado; 
		printf("Digite um numero para realizar alteracoes:\n");
	scanf("%d", &Dado);
	printf("Dado antes das alteracoes: %d.\n", Dado);
	
	Dado++;
	printf("Depois do incremento de uma unidade: %d.\n", Dado);
	
	Dado--;
	printf("Depois do decremento de uma unidade: %d.\n", Dado);
	
	Dado += 5;
	printf("Depois do incremento de 5 unidades: %d.\n", Dado);
	
	Dado -= 7;
	printf("Depois do decremento de 7 unidades: %d.\n", Dado);
	
	Dado *= 10;
	printf("Depois de multiplicar em 10 vezes: %d.\n", Dado);
	
	Dado /= 4;
	printf("Depois de ser divido por 4: %d.\n", Dado);
	
}
