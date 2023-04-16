#include<stdio.h>
#include<stdlib.h>

int main(){
	char comb;
	float disc = 0,l = 0,val = 0,vt = 0;
	printf("Digite o tipo de combustivel (G para Gasolina ou A para Alcool):");
	scanf("%c",&comb);
	printf("\n");
	printf("Digite a quantidade de litros:");
	scanf("%f",&l);
	
	if( comb == 'A' && l <= 20){
		disc = 0.03;
		val = 3.19 * l;
		vt += val - val * disc;
	}

	else if( comb == 'A' && l > 20){
		disc = 0.05;
		val = 3.19 * l;
		vt += val - val * disc;
	}
	
	else if( comb == 'G' && l <= 20){
		disc = 0.04;
		val = 4.39 * l;
		vt += val - val * disc;
	}
	
	else if( comb == 'G' && l > 20){
		disc = 0.06;
		val = 4.39 * l;
		vt += val - val * disc;
	}
	
	printf("\nValor com desconto de %.0f%%: %.2f\n",disc*100,vt);
	system("Pause");

}
	
