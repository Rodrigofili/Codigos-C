#include <stdio.h>


int main(){
	int A, B, Soma, Subt, Mult, Divi, Res;
	
	printf("Digite o primeiro numero inteiro:\n");
	scanf("%d", &A);
	printf("Digite o segundo numero inteiro:\n");
	scanf("%d", &B);
	
	Soma = A + B;
	Subt = A - B;
	Mult = A * B;
	Divi = A / B;
	Res = A % B;
	
	printf ("Resultado das opera�oes:\n");
	printf("Soma: %d.\n", Soma);
	printf("Subtra�ao: %d.\n", Subt);
	printf("Multiplica�ao: %d.\n", 	Mult);
	printf("Divis�o: %d.\n", Divi);
	printf("Divis�o com Resto: %d.\n", Res);
	
	
}
