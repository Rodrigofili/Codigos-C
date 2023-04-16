#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	int i,n = 50;
	
	for(i = 1; i<=n;i++){
		
		if(i%2 == 0){
			
			sleep(1);
			printf(" %d",i);
			
		}
	}
	printf("\n");
	system("pause");
}
