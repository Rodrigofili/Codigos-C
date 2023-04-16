#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	float p,sum;
	int qnt,i;
	
	printf("digite a quantidade de produtos:");
	scanf("%d",&qnt);
	for(i=1;i <= qnt;i++){
		printf("digite o preço do produto%d: ",i);
		scanf("%f",&p);
		printf("Produto %d\t=\t%.2f\n",i,p);
		sum+=p;
}
	printf("-------------------\n");
	printf("Total\t=\t%.2f\n",sum);
    system("pause");
}
