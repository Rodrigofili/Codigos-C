#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	int i = 0,sum = 0,num = 1;
	float media;

		while(num != 0){

        printf("Digite um número:");
		scanf("%d",&num);
		
		sum += num;
		i++;
		printf("\n");
}
        media = sum/(i-1);
        
		printf("Você digitou %d números",i);
		printf("\nO somatório dos números é %d",sum);
		printf("\nMédia = %.f\n",media);
		
		system("pause");
		
}
