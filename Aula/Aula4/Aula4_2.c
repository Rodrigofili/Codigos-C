#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,n=10,index = 0;
	float v[n],maior;
	

//inicializando o vetor:
	for(i = 0; i < n;i++){
		printf("Digite o Valor %d:",i+1);
		scanf("%f",&v[i]);
	}

    for(i= 0,maior = 0;i < n;i++){
    if(v[i] > maior){
    maior = v[i];
    index = i;
		}
	}
	printf("O maior número é: %f\nlocalizado na posição %d do vetor v.\n",maior,index);
	system("Pause");
	return 0;

}
