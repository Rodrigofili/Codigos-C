#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
	float dist;
	float taxa1 =0.5,taxa2 = 0.45,result;
    
    printf("Qual distãncia que você deseja percorrer:");
    scanf("%f",&dist);
    
    if (dist <= 200){
		result += taxa2*dist;
		
		printf("O preço pago para percorrer a distância %.2f é:%.2f R$\n",dist,result);
	}
	
	else{
		result += taxa1*dist;
		printf("O preço pago para percorrer a distância %.2f é:%.2f R$\n",dist,result);
		printf("\n");
	}
	system("pause");
}
	
	
