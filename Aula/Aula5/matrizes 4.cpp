#include<stdio.h>
#include<stdlib.h>

int main(){
	int linha = 3, coluna = 3,i,j,soma=0;
	int m[linha][coluna];
	
	for(i = 0;i < 3;i++){
		for(j = 0;j < 3; j++){
		printf("Digite o elemento m[%d][%d] = ",i+1,j+1);
		scanf("%d",&m[i][j]);
		if(i==j){
			soma += m[i][j];
		}
	}
}
    for(i = 0;i < 3;i++){
		for(j = 0;j < 3; j++){
			printf("%3d ",m[i][j]);
			if(j==coluna-1){
				printf("\n");
		}
	}
}
    printf("\n");
    printf("A soma dos termos da diagonal principal eh: %d",soma);
    printf("\n");
    system("pause");
    return 0;
}
