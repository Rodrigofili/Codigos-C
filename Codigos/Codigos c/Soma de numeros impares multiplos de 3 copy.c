#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,soma,cont;
	
	for(i=1;i<=500;i+=2){
		
		printf(" %d",i);
		
		if(i%3 == 0){
			cont++;
			soma+= i;

		}
	}
				
	printf("\nSoma dos números ímpares multiplos de 3 é: %d\n",soma);
	printf("A quantidade de números somados foram: %d\n",cont);
			
	system("pause");
}
