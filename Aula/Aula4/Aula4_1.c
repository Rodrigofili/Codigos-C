#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i, v[5];
	
//inicializando o vetor:
	for(i = 0; i < 5;i++){
		printf("Digite o Valor %d:",i+1);
		scanf("%d",&v[i]);
	}
	
	for(i = 0; i < 5;i++){

		printf("Valor %d: %d\n",i+1,v[i]);

	}
	
	system("Pause");
	return 0;
	
}
	
	
