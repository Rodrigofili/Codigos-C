#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include <locale.h>

char letra;
int i;
char pass [100];
char tela[100];
char letraprint[100];

void forca(int estado){
	
	
	if(estado==0){
	printf("  _______       \n");
	printf(" |/      |   LETRAS USADAS :%c, \n", letra);
	printf(" |              \n"); 
	printf(" |              \n");
	printf(" |              \n"); 
	printf(" |      	    \n");
	printf(" |              \n");
	printf("_|___           \n");
	printf("\n\n");
	}
	else if(estado == 1){
	printf("  _______       \n");
	printf(" |/      |   LETRAS USADAS :%c, \n", letra);
	printf(" |       0      \n"); 
	printf(" |              \n");
	printf(" |              \n"); 
	printf(" |      	    \n");
	printf(" |              \n");
	printf("_|___           \n");
	printf("\n\n");
		
	}
	else if(estado == 2){
	printf("  _______       \n");
	printf(" |/      |   LETRAS USADAS :%c, \n", letra);
	printf(" |       0      \n"); 
	printf(" |       |      \n");
	printf(" |              \n"); 
	printf(" |      	    \n");
	printf(" |              \n");
	printf("_|___           \n");
	printf("\n\n");
		
	}
	else if(estado == 3){
	printf("  _______       \n");
	printf(" |/      |   LETRAS USADAS :%c, \n", letra);
	printf(" |       0      \n"); 
	printf(" |      /|      \n");
	printf(" |              \n"); 
	printf(" |      	    \n");
	printf(" |              \n");
	printf("_|___           \n");
	printf("\n\n");
		
	}	
	else if(estado == 4){
	printf("  _______       \n");
	printf(" |/      |   LETRAS USADAS :%c, \n", letra);
	printf(" |       0      \n"); 
	printf(" |      /|\\    \n");
	printf(" |              \n"); 
	printf(" |      	    \n");
	printf(" |              \n");
	printf("_|___           \n");
	printf("\n\n");
	}
	else if(estado == 5){
	printf("  _______       \n");
	printf(" |/      |   LETRAS USADAS :%c, \n", letra);
	printf(" |       0      \n"); 
	printf(" |      /|\\    \n");
	printf(" |      /       \n"); 
	printf(" |      	    \n");
	printf(" |              \n");
	printf("_|___           \n");
	printf("\n\n");
	}
	
	else if(estado == 6){
	printf("  _______       \n");
	printf(" |/      | 	 LETRAS USADAS :%c, \n", letra);
	printf(" |       0      \n"); 
	printf(" |      /|\\    \n");
	printf(" |      / \\    \n"); 
	printf(" |      	    \n");
	printf(" |   GAME OVER! \n");
	printf("_|___           \n");
	printf("\n\n");
	}

}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	

	printf("JOGADOR 1:\n");
	printf("DIgite a palavra secreta!:\n");
	fgets(pass, 100, stdin);
	printf("A palavra secreta é: %s\n", pass);
	printf("A palavra secreta tem &lu caracteres", strlen(pass)-1);
	

	for(i=0;i<30;i++){
		
	system("cls");
	
	}
	
	pass[strlen(pass) - 1] = '\0';

	strcpy(tela, pass);
	
	
	for(i = 0; i<strlen(tela); i++){
		
		tela[i] = '_';
	}
	
	int erros = 0;
	while(1){
	
		forca(erros);
		
		printf("Adivinhe a palavra: \n");
		
		for(i=0; i<strlen(tela);i++){
			printf("%c", tela[i]);
		}
		
		printf("\nLetra: \n");
		scanf(" %c", &letra);
	
		for(i=0; i<strlen(tela);i++){
			
			letraprint[i] = letra;
		}
		
	
		
		int tentativa = 1; //possibilidade de ter errado uma letra (sim =1 , 0 = nao)
		for (i=0; i<strlen(tela);i++){
			
			if (letra == pass[i]){
				tela[i] = letra;
				tentativa = 0;
				system("cls");
			}
		}
		
		if (tentativa == 1){
			erros++;
			system("cls");
		}
		
		if (strcmp(tela, pass) == 0){
			
			system("cls");
			
			printf("Palavra adivinhada: %s \n", pass);
			printf("Parabéns você Venceu !!! \n");


			break;
		}
		
		if (erros == 6){
			
			forca(erros);
			break;
		}
		
	
	
		
	}
	
	return 0;
}
