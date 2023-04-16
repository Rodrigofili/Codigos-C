#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <iostream>


int main(){
	
	int l = 0, c = 0;
	int matriz[l][c], i, j;
	
	printf("Digite o numero de linhas da matriz:\n");
	scanf("%d", l);
	
	printf("Digite o numero de colunas da matriz:\n");
	scanf("%d", c);
	
	
//	imprimindo valores na tela
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++ ){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
//	lendo valores para a matriz:
		for(i = 0; i < l; i++){
			for(j = 0; j < c; j++ ){
			scanf("%d", &matriz[i][j]);
		}
	}

//	imprimindo valores na tela:
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++ ){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
}
