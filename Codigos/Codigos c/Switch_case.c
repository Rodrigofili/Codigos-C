#include <stdio.h>

int main(){
	
	int menu, num1, num2, soma, subt, mult, m;
	float divi, num3, num4;
	
	printf("Bem vindo(a) a calculadora virtual!\n Selecione um valor do menu para realizar uma operacao.\n 1- Soma.\n 2- Subtracao.\n 3- multiplicacao.\n 4- divisao.\n 5-perguntas logicas.\n 6- Sair.\n ");
	scanf("%d", &menu);
	
	switch(menu){
		case 1:
			printf("Voce escolheu Soma!\n Por Favor escolha dois numeros para a operacao:");
			scanf("%d", &num1);
			scanf("%d", &num2);
			
			soma = num1 + num2;
			
			printf("O seu resultado eh!: %d\n", soma);
			break;
			
		case 2:
			printf("Voce escolheu Subtracao!\n Por Favor escolha dois numeros para a operacao:");
			scanf("%d", &num1);
			scanf("%d", &num2);
			
			subt = num1 - num2;
			
			printf("O seu resultado eh!: %d\n", subt);
			break;
		
		case 3:
			printf("Voce escolheu Multiplicacao!\n Por Favor escolha dois numeros para a operacao:");
			scanf("%d", &num1);
			scanf("%d", &num2);
			
			mult = num1 * num2;
			
			printf("O seu resultado eh!: %d\n", mult);
			break;
		
		case 4:
			printf("Voce escolheu Divisao!\n Por Favor escolha dois numeros para a operacao:");
			scanf("%f", &num3);
			scanf("%f", &num4);
			
			divi = num3 / num4;
			
			printf("O seu resultado eh!: %.2f\n", divi);
			break;
		
		case 5:
			printf("Palmeiras tem mundial?\n");
			printf("Digite 1 para sim\n 2 para nao\n");
			scanf("%d", &m);
			if(m == 1){
				printf("Voce errou o Palmeiras não tem mundial");
				
			}
			else{
				printf("Voce acertou o Palmeiras realmente não tem mundial");
				
			}
			break;
			
		case 6:
			printf("Obrigada pela visita\n Volte sempre!");
			break;
		
		default:
			printf("Valor incorreto...\n");
			break;
		
				
	}
}	

