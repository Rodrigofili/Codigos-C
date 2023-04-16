#include<stdio.h>
#include<stdlib.h>

int main(){

	char res1,res2,res3,res4,res5;
	int i;
	
	printf("Responda as perguntas com sim (s) ou nao (n)\n");
	
	printf("Telefonou para a vitima?");
	scanf("%c", &res1);

	if (res1 == 's'){
		i++;
}

	printf("Esteve no local do crime?");
	scanf(" %c", &res2);

	if (res2 == 's'){
		i++;
}

	printf("Mora perto da vitima?");
	scanf(" %c", &res3);

	if (res3 == 's'){
		i++;
}

	printf("Devia para a vitima?");
	scanf(" %c", &res4);

	if (res4 == 's'){
		i++;
}

	printf("Ja trabalhou com a vitima?");
	scanf(" %c", &res5);

	if (res5 == 's'){
		i++;
}

	else if(i > 0){
		printf("\nSUSPEITO!");
	}
	
	else if(i < 0){
		printf("\nCUMPLICE!");
	}

//system("Pause");
}



