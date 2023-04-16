#include<stdio.h>
#include<stdlib.h>

int main(){

	float sal = 0,aum = 0,rea = 0,ind = 0;

	printf("Digite o salário:");
	scanf("%f",&sal);
	printf("\n");

	if(sal > 0 && sal <= 400){
		ind = 0.15;
		aum += sal * ind + sal;
		rea += sal * ind;
	}
	
	else if(sal > 400 && sal <= 800){
        ind = 0.12;
		aum += sal * ind + sal;
		rea += sal * ind;

	}
	
	else if(sal > 800 && sal <= 1200){
        ind = 0.1;
		aum += sal * ind + sal;
		rea += sal * ind;

	}

	else if(sal > 1200 && sal <= 2000){
        ind = 0.07;
		aum += sal * ind + sal;
		rea += sal * ind;

	}

	else if(sal > 2000){
        ind = 0.04;
		aum += sal * ind + sal;
		rea += sal * ind;

	}

	printf("Novo salario = %.2f\n",aum);
	printf("Valor do reajuste = %.2f\n",rea);
	printf("Indice do reajuste = %.2f\n",ind*100);
	system("Pause");
}
