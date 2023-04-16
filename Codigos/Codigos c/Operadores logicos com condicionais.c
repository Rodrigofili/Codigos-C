#include <stdio.h>

int main(){
	
	float m;
	
	printf("insira a nota do aluno:\n");
	scanf("%f",&m);
	
	if(m >= 4.0 && m < 7.0){
		printf("Tem direito a exame!\n");
	
	}
	
	if(m >= 7.0 ){
		printf("Aprovado(a)!\n");
	}
	
	if(m < 4){
		printf("Reprovado(a)!\n");
	}
}
