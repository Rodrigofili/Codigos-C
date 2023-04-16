#include <stdio.h>
#include <stdlib.h>

int datamagica(int dia, int mes, int ano) {
  
  int anoDoisDigitos = ano % 100; // Obtém o ano de dois dígitos

  if (dia * mes == anoDoisDigitos) {
    return 1; // É uma data mágica
  } else {
    return 0; // Não é uma data mágica
  }

}


int main(void) {

  int dia;
  int mes;
  int ano;

  printf("Digite o dia:");
  scanf("%d",&dia);

  printf("\nDigite o mes:");
  scanf("%d",&mes);

  printf("\nDigite o ano:");
  scanf("%d",&ano);

  if  (datamagica(dia, mes,ano) == 1) {
        printf("\nA data %d/%d/%d é mágica\n", dia, mes, ano);//se a data for magica recebe o return 1 e coloca no formato do moodle
    }
  else{
    printf("\nNão é uma data magica!");//se nao for magica imprime o resultado return 0
  }
  return 0;
}
