#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

//fun��o principal do programa
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,vetor[TAM];
	float s = 0;
	
	
	//passando valores pro vetor:
	vetor[0] = 5;
	vetor[1] = 16;
	vetor[2] = 37;
	
	for(i = 0; i < TAM; i++){
		
		vetor[i] = vetor[i] + 1;
	}

	//exibindo valores dos vetores
	printf("\nPosi��o 0: %d", vetor[0]);
	printf("\nPosi��o 1: %d", vetor[1]);
	printf("\nPosi��o 2: %d\n", vetor[2]);
	
	//imprimindo vetores com la�o de repeti��o
	
	for(i = 0; i < TAM; i++){
		
		printf("\nPosi��o %d: %d\n", i, vetor[i]);
	}


	//	usar uma constante para definir o tamanho de um vetor #define TAM 3
	
	// lendo 3 valores para o vetor
	
	for(i = 0; i < TAM; i++){
		
		scanf("%d", &vetor[i]);
		}
	
	for(i = 0; i < TAM; i++){
		
		printf("\nPosi��o %d: %d\n",i, vetor[i]);
	}

	
	

	
	
}
