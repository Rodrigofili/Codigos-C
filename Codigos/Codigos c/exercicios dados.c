#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int jogadores;
	int igual, Maior,max;
	char nome[100];
	char num_jogador[nome[100]][jogadores];
	int valores[jogadores];
	int i = 0;
	int j;
	
	srand(time(NULL));
	
	printf("Digite o número de jogadores:");
	scanf("%d", &jogadores);
	fflush(stdin);
	
	do{
		valores[i] = 1 + (rand() % 6);
		igual = 0;
		for(j = 0; j < i; j++){
			if(valores[j] == valores[i]){
				igual = 1;
			}
		}
		if(igual == 0){
			i++;
		}
	}while(i < jogadores);
		

	
	for(i = 0; i < jogadores; i++){
//		printf("Jogador número: %d Valor do dado: %d\n", i+1,valores[i]);
		printf("\nInforme o nome do jogador %d: ", i+1);
    	gets(num_jogador[i]);
    	printf("Valor do dado: %d ", valores[i]);

	}
		Maior = valores[0];  // assume que o primeiro é o maior
    for(i = 0; i < jogadores; i++){
    	if (valores[i] > Maior){
    		 Maior = valores[i];
	}
		}
		max = valores[0];
		for(i=1,max=0;i<jogadores;i++){
			if(valores[i] > valores[max]){
		 	max = i;
		 }
		
			printf("\n O jogador %s obteve o número %d que foi o maior número nos dados",num_jogador[max],Maior);
      
	}

	
}
