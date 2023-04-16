#include <stdio.h>
#include<time.h>
#include <stdlib.h>

int binarioaletorio(){
	srand(time(NULL));
	int binario[2],igual;
	int i,j;
	
	do{
		binario[i] = 1 + (rand() % 1);
		igual = 0;
		for(j = 0; j < i; j++){
			if(binario[j] == binario[i]){
				igual = 1;
			}
		}
		if(igual == 0){
			i++;
		}
	}while(i < 2);

	return binario[i];
}

int main(){
	
	int a;
	
	a = binarioaletorio();
	
	printf("%d",a);
	
}
