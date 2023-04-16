#include <stdio.h>

int main(){
	
	int a0, razao, n, i, termo;
	int count = 0;
	
	printf("qual a eh o primeiro termo da progressao: ");
	scanf("%d", &a0);
	printf("qual a razao da progressao:");
	scanf("%d", &razao);
	printf("qual a quantidade de termos da progressao");
	scanf("%d", &n);
	
	
	for(a0; count < n; count++){
		
		termo = a0 + count * razao;	
		printf("%d ", termo);
	}
	
	printf("ACABOU!!");

}
