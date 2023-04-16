#include <stdio.h>

int main(){
	
	int Km_rodados = 0, dias_alugados = 0, diaria = 60;
	float taxa_rodados = 0.15, preco;
	

	printf("quantidade de Km percorridos pelo carro:\n");
	scanf("%d", &Km_rodados);
	printf("quantidade de dias alugados:\n");
	scanf("%d", &dias_alugados);
	
	preco = diaria*dias_alugados + Km_rodados*taxa_rodados;
	
	printf("O preco a pagar eh: %.2f\n", preco);
	
}
