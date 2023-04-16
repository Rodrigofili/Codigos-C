#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int soma = 0,i,sumi = 0,v[10];
	
	for(i = 0; i<10;i++){
		printf("Digite um numero:");
		scanf("%d",&v[i]);

		if(v[i]%2 == 0){
			soma += v[i];
	}
}
	for(i = 0; i < 10; i +=2){
		sumi += v[i];
	
}
	printf("A soma dos valores pares são: %d\n",soma);
	printf("A soma dos elementos de indice par são: %d\n",sumi);
	system("Pause");

}
