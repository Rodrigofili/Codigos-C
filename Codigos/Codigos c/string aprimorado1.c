#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//vari�vel
	char word[10];
	
	//instru��o
	printf("Digite uma palavra: \n");
	
	//lendo a string
	fgets(word, 9,stdin);
	
	//limpar o buffer "tamb�m pode ser utilizado assim" --> setbuf(stdin, 0);
	fflush(stdin);
//	setbuf(stdin, 0);
	
	//limpar as casas nao utilizadas da memoria:
	word[strlen(word)-1] = '\0';
	
	//imprimindo a palavra
	puts(word);
	
}
