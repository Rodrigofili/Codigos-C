#include <stdio.h>

int main(){
	
	char s[50];
	
	printf("Digite algo (scanf padrao):\n");
	scanf("%s", s);
	fflush(stdin);
	printf("Resultado: %s\n\n", s);
	
	printf("Digite algo (scanf aprimorado): \n");
	scanf("%49[^\n]s", s);
	fflush(stdin);
	printf("Resultado: %s\n\n", s);
	
	printf("Digite algo (leitura pelo gets):\n");
	gets(s);
	fflush(stdin);
	puts("Resultado:");
	puts(s);
	puts("");
	
	printf("Digite algo (leitura pelo fgets):\n");
	fgets(s, 50, stdin);
	fflush(stdin);
	puts("Resultado:");
	puts(s);
	puts("");
	
}
