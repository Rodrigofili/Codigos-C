#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	
	int i, np, idade[np], s = 0, high, sexo[np];
	char nome[50] = "";  
	float media;
	
	
	printf("Digite o numero de pessoas que realizara a pesquisa: ");
	scanf("%d", &np);
	fflush(stdin);
	
	
	for (i = 1; i<=np; i++){
		
		printf("----- %dª PESSOA -----\n", i);
		printf("Nome:");
		gets(nome);
		fflush(stdin);
		printf("Idade:");
		scanf("%d", &idade[i]);
		fflush(stdin);
		printf("Sexo:1- para Masculino 2- Feminino:\n");
		scanf("%d", &sexo[i]);
		fflush(stdin);
		
		
		s += idade[i];
	}
	
		for (i = 0; i <= np; i++) {
    	if (i == 0) {
        	high = idade[i];
    }
    	if (idade[i] > high && sexo[i] == 1) {
        	high = idade[i];
        
        
        
    }
}
	
	media = s/np;
	
	printf("A media de idade do grupo eh de %.2f anos\n", media);
	printf("O Homem mais velho tem %d anos\t e se chama %s", high, nome);
	
	
	
	
	
}
