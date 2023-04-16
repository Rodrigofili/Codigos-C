#include<stdio.h>
#include<stdlib.h>

int main(){
	int linha = 10, coluna = 15,i,j;
	int m[linha][coluna];

	srand(100);

	for(i = 0;i < 10;i++){
		for(j = 0;j < 15; j++){
        m[i][j] = rand() % 101;
		}
	}
    for(i = 0;i < 10;i++){
		  for(j = 0;j < 15; j++){
			printf("%3d ",m[i][j]);
			if(j==coluna-1){
				printf("\n");
		}
	}
}
	printf("\n");
//printa uma linha
    for(i = 0;i < 10;i++){
		  for(j = 0;j < 1; j++){
			printf("%3d ",m[i][j]);
            if(j==coluna-1){
				printf("\n");
		}

	}
}
	printf("\n");
	system("pause");
	return 0;
}
