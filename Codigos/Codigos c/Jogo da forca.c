#include <stdio.h>
#include<string.h>

void forca(int estado){
	if(estado==0){
	printf("  _______       \n");
	printf(" |/      |      \n");
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
	printf(" |/      |      \n");
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
	printf(" |/      |      \n");
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
	printf(" |/      |      \n");
	printf(" |       0      \n"); 
	printf(" |      /|       \n");
	printf(" |              \n"); 
	printf(" |      	    \n");
	printf(" |              \n");
	printf("_|___           \n");
	printf("\n\n");
		
	}	
	else if(estado == 4){
	printf("  _______       \n");
	printf(" |/      |      \n");
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
	printf(" |/      |      \n");
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
	printf(" |/      |      \n");
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
	
	int i;
	char pass [100];
	printf("JOGADOR 1:\n");
	printf("Descubra a palavra se puder!:\n");
	sfgets(pass, 100, stdin);
	printf("A palavra secreta é: %s\n", pass);
	printf("A palavra secreta tem &lu caracteres", str_len(pass)-1);
	
	for(i=0;i<30;i++){
		system("cls");
	}
	
	char tela[100];
	strcpy(tela, pass);
	tela[strlen(tela) - 1] = '\0';
	
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
		
		puts(tela);
	}
	
	return 0;
}
