#include <stdio.h>

int main(){
	
	int i, num, tabuada;
	
	
	printf("Digite um numero para saber a tabuada dele:\t"); 
	scanf("%d", &num);
	
	for(i = 0; i<=10; i++){
		
		tabuada = i * num;
		
		printf("%d x %d = %d\n", i, num, tabuada);
	}
}
