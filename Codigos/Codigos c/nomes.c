#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	
	printf("Digite um nome:\n");
	fgets(nome,29,stdin);
	
	printf("Nome maiúsculo: %s", nome,toupper(nome));
	
	
	
}
	
