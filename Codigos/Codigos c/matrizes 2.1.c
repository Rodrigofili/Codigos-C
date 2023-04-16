#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	
	int i, j, k, l;	
	int mat[i][j];
	
	printf("digite o número de linhas da matriz :\n");
	scanf("%d", &i);
	
	printf("digite o número de colunas da matriz :\n");
	scanf("%d", &j);
	
	for(k=0; k < i; k++){
		printf("digite os valores para as linhas da matriz:\n ");
		scanf("%d", &mat[k][j]);
	
	}
	
	for(l=0; l< j; l++){
		printf("digite os valores para as colunas da matriz:\n ");
		scanf("%d", &mat[i][k]);
		
}

	printf("sua matriz:\n");
	printf("%d", mat[i][j]);

}
