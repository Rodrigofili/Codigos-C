#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int dia=0,h=0,min=0,seg=0;
	int t_seg=0;

	printf("digite o numero de dias:\n");
	scanf("%d",&dia);
	printf("\n");
	printf("digite o numero de horas:\n");
	scanf("%d",&h);
	printf("\n");
	printf("digite o numero de minutos:\n");
	scanf("%d",&min);
	printf("digite o numero de segundos:\n");
	scanf("%d",&seg);
	printf("\n");
	
	t_seg = dia*24*h*60*min*60+seg;
	
	printf("o tempo total em segundos é: %d\n",t_seg);
	system("pause");
}
