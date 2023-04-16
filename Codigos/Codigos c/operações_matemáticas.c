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
	
	printf ("Resultado das operaçoes:\n");
	printf("Soma: %d.\n", Soma);
	printf("Subtraçao: %d.\n", Subt);
	printf("Multiplicaçao: %d.\n", 	Mult);
	printf("Divisão: %d.\n", Divi);
	printf("Divisão com Resto: %d.\n", Res);
	
	
}
