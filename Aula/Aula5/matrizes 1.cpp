#include<stdio.h>
#include<stdlib.h>

int main(){
	int linha = 5, coluna = 5,i,j;
	int m[linha][coluna];
	int m2[linha][coluna];
//diagonal secundaria
	for(i = 0;i<5;i++){
		for(j = 0;j<5; j++){
			if(i+j==linha-1){
            m2[i][j] = 1;
		}
		else{
			m2[i][j] = 0;
		}
	}
}
//matriz identidade
	for(i = 0;i<5;i++){
		for(j = 0;j<5; j++){
			if(i==j){
            m[i][j] = 1;
		}
		else{
			m[i][j] = 0;
		}
	}
}

	for(i = 0;i<5;i++){
		for(j = 0;j<5; j++){
			printf("%3d",m2[i][j]);
			if( j == coluna-1){
				printf("\n");
		}
	}
}
	printf("\n");
	for(i = 0;i<5;i++){
		for(j = 0;j<5; j++){
			printf("%2d",m[i][j]);
			if( j == coluna-1){
				printf("\n");
		}
	}
}
    printf("\n");
	system("pause");
	return 0;
}

