#include<stdio.h>
#include<stdlib.h>

int main(){
	int linha = 4, coluna = 4,i,j,soma=0;
	int m[linha][coluna];
	int impar[linha];
	

	for(i = 0;i < 4;i++){
		for(j = 0;j < 4; j++){
		printf("Digite o elemento m[%d][%d] = ",i+1,j+1);
		scanf("%d",&m[i][j]);
		if(m[i][j] % 2 != 0){
			soma += m[i][j];
		}
	}
	impar[i] = soma;
}

    for(i = 0;i < 4;i++){
		  for(j = 0;j < 4; j++){
			printf("%3d ",m[i][j]);
			if(j==coluna-1){
				printf("\n");
		}
	}
}
    printf("\n");
	for(i=0;i<4;i++){
    	printf("%2d ",impar[i]);
}
	printf("\n");
	system("pause");
	return 0;
}
