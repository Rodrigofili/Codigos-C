#include<stdio.h>
#include<stdlib.h>

int main(){
	float x, y;
	
	printf("Digite x e y:\n");
	scanf("%f %f",&x,&y);

	
	if( x > 0 && y > 0 ){
		printf("Q1\n");
	}
	
	else if( x < 0 && y > 0 ){
		printf("Q2\n");
	}
	
	else if( x < 0 && y < 0 ){
		printf("Q3\n");
	}
	
	else if( x > 0 && y < 0 ){
		printf("Q4\n");
	}
	
    else if( x == 0 && y == 0 ){
		printf("Origem\n");
	}
	
	else if( x == 0){
		printf("Sobre o eixo y\n");
	}
	
	else if( y == 0){
		printf("Sobre o eixo x\n");
	}

//	system("Pause");

}
