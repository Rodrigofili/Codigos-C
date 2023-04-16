#include <stdio.h>
#include <locale.h>

#define PBT 24000

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero_de_eixos, i, j, k,counts[93][3] = {0};
	int peso_por_eixos[93] = {0};
	char stop;
	int inicio_range, fim_range;
	
	printf("Digite o número de eixos do seu caminhão:");
	scanf("%d",&numero_de_eixos);
	printf("\n");
	
	while(1){
		int inicio_range, fim_range;
		printf("Digite o range de velocidades (inicio e fim) separados por espaço:");
		scanf("%d %d",&inicio_range, &fim_range);
		printf("\n");
		
		for(i = 1; i <= numero_de_eixos; i++){
			printf("Digite o peso do eixo %d em diferentes velocidades:\n", i);
			for(j = inicio_range; j <= fim_range; j += 10){
				int counts[3] = {0};
				for(k = 0; k < 3; k++){
					printf("Velocidade %d Km/h: ",j);
					scanf("%d", &counts[k]);
				}
				int soma_counts = counts[0] + counts[1] + counts[2];
				if(soma_counts > 0){
					float peso_medio = (float)PBT * soma_counts / (3 * 3862);
					printf("Peso do eixo %d a %d Km/h: %.2f\n", i, j, peso_medio);
				}
			}
			printf("\n");
		}
		
		printf("Digite 'p' para sair ou qualquer outra tecla para continuar: ");
		scanf(" %c", &stop);
		if(stop == 'p')
			break;
	}
	
	printf("\n\n");
	
    for(i = 1; i <= numero_de_eixos; i++){
        int peso_zero_velocidade = peso_por_eixos[i] - (PBT*counts[i][0]/3862);
        printf("Peso do eixo %d com velocidade zero: %d\n", i, peso_zero_velocidade);
    }
	return 0;
}

