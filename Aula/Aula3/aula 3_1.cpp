#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	int i = 0,sum = 0,num = 1;
	float media;

		while(num != 0){

        printf("Digite um n�mero:");
		scanf("%d",&num);
		
		sum += num;
		i++;
		printf("\n");
}
        media = sum/(i-1);
        
		printf("Voc� digitou %d n�meros",i);
		printf("\nO somat�rio dos n�meros � %d",sum);
		printf("\nM�dia = %.f\n",media);
		
		system("pause");
		
}
