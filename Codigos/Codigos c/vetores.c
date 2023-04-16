#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

//função principal do programa
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
	printf("\nPosição 0: %d", vetor[0]);
	printf("\nPosição 1: %d", vetor[1]);
	printf("\nPosição 2: %d\n", vetor[2]);
	
	//imprimindo vetores com laço de repetição
	
	for(i = 0; i < TAM; i++){
		
		printf("\nPosição %d: %d\n", i, vetor[i]);
	}


	//	usar uma constante para definir o tamanho de um vetor #define TAM 3
	
	// lendo 3 valores para o vetor
	
	for(i = 0; i < TAM; i++){
		
		scanf("%d", &vetor[i]);
		}
	
	for(i = 0; i < TAM; i++){
		
		printf("\nPosição %d: %d\n",i, vetor[i]);
	}

	
	

	
	
}
