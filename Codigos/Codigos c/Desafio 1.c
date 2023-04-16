#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, nt, pow;
	int vet[nt];
	
	scanf("%d", &nt);
	
	for (i = 0; i < nt; i++){
		printf("Digite os valores para o vetor:\n");
		
		scanf("%d", &vet[i]);
		
		printf("Posição %d e valor: %d\n", i, vet[i]);
		
		printf("vetor:", vet[nt]);	
		
		vet[i]*= vet[i];
		
		printf("valor: %d\n", vet[i]);
		
		printf("vetor:%d", vet[nt]);	
	}	
	
	return 0;
}
