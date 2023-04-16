#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int ano;
	
	printf("\nDigite um numero para saber se ele e bisexto:");
	scanf("%d",&ano);
	fflush(stdin);
	
	if (ano%400 == 0 || (ano % 4 == 0 && ano % 100 !=0)){
		printf("\nO ano de %d digitado e bisexto\n",ano);
	}
	else{
        printf("\nO ano de %d digitado nao e bisexto\n",ano);
	}
	system("pause");
}
