#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	int i, n = 5,v[n];


	for(i = 0;i<n;i++){
		printf("Digite um numero:");
		scanf("%d",&v[i]);

	}

	for(i =(n - 1);i >= 0;i--){
		printf("%d\n",v[i]);
	}

//	system("Pause");
	return 0;

}
