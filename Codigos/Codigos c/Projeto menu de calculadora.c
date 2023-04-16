#include <stdio.h>
#include <stdlib.h>

void limpa_tela(){
	system("cls");
}

int main(){
	
	int menu, num1, num2, soma, subt, mult, m, i=1, ret,res;
	float divi, num3, num4;
	
	while(i<=10){
		
			printf("Bem vindo(a) a calculadora virtual!\n Selecione um valor do menu para realizar uma operacao.\n 1- Soma.\n 2- Subtracao.\n 3- multiplicacao.\n 4- divisao.\n 5- resto.\n 6- Sair.\n ");
			printf("\nInsira um numero:");
			scanf("%d", &menu);
	
	switch(menu){
		case 1:
			limpa_tela();
			printf("Voce escolheu Soma!\n Por Favor escolha um numero para a operacao:");
			scanf("%d", &num1);
			printf("Voce escolheu Soma!\n Por Favor escolha outro numero para a operacao:");
			scanf("%d", &num2);
			
			soma = num1 + num2;
			
			printf("O seu resultado eh!: %d\n", soma);
			
			printf("gostaria de sair? ou quer retornar ao menu?\n");
			printf("digite 1 para sair ou 2 para retornar ao menu!");
			scanf("%d", &ret);
			if(ret == 1){
				
				i+=10;
			}
			
			else{
				
				i++;
			}
			
			break;
			
		case 2:
			limpa_tela();
			printf("Voce escolheu Soma!\n Por Favor escolha um numero para a operacao:");
			scanf("%d", &num1);
			printf("Voce escolheu Soma!\n Por Favor escolha outro numero para a operacao:");
			scanf("%d", &num2);
			
			subt = num1 - num2;
			
			printf("O seu resultado eh!: %d\n", subt);
			
			printf("gostaria de sair? ou quer retornar ao menu?\n");
			printf("digite 1 para sair ou 2 para retornar ao menu!");
			scanf("%d", &ret);
			if(ret == 1){
				
				i+=10;
			}
			
			else{
				
				i++;
			}
			
			break;
			
		case 3:
			limpa_tela();
			printf("Voce escolheu Soma!\n Por Favor escolha um numero para a operacao:");
			scanf("%d", &num1);
			printf("Voce escolheu Soma!\n Por Favor escolha outro numero para a operacao:");
			scanf("%d", &num2);
			
			mult = num1 * num2;
			
			printf("O seu resultado eh!: %d\n", mult);
			
			printf("gostaria de sair? ou quer retornar ao menu?\n");
			printf("digite 1 para sair ou 2 para retornar ao menu!");
			scanf("%d", &ret);
			if(ret == 1){
				
				i+=10;
			}
			
			else{
				
				i++;
			}
			
			break;
		
		case 4:
			limpa_tela();
			printf("Voce escolheu Soma!\n Por Favor escolha um numero para a operacao:");
			scanf("%d", &num3);
			printf("Voce escolheu Soma!\n Por Favor escolha outro numero para a operacao:");
			scanf("%d", &num4);
			
			divi = num3 / num4;
			
			printf("O seu resultado eh!: %.2f\n", divi);
			
			printf("gostaria de sair? ou quer retornar ao menu?\n");
			printf("digite 1 para sair ou 2 para retornar ao menu!");
			scanf("%d", &ret);
			if(ret == 1){
				
				i+=10;
			}
			
			else{
				
				i++;
			}
			
			break;
		
		case 5:
			limpa_tela();
			printf("Voce escolheu Soma!\n Por Favor escolha um numero para a operacao:");
			scanf("%d", &num1);
			printf("Voce escolheu Soma!\n Por Favor escolha outro numero para a operacao:");
			scanf("%d", &num2);
			
			res = num1 % num2;

			printf("O seu resultado eh!: %d\n", res);

			printf("gostaria de sair? ou quer retornar ao menu?\n");
			printf("digite 1 para sair ou 2 para retornar ao menu!");
			scanf("%d", &ret);
			if(ret == 1){

				i+=10;
			}

			else{

				i++;
			}

			break;
		case 6:
			limpa_tela();
			printf("Obrigada pela visita\n Volte sempre!");
			i+=10;
			break;
		
		default:
			limpa_tela();
			printf("Valor incorreto...\n");
			i=1;
			break;
		
	}
	}
	

}	
