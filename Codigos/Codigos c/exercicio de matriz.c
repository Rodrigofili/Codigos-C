#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
  setlocale (LC_ALL, "Portuguese");
   int mat[3][3];
   int i, j, par, Maior, somac;
   
   printf("\nAdicionando valores para uma matriz completa:\n");
   		for(i = 0; i < 3; i++){
			for(j = 0; j < 3; j++ ){
			scanf("%d", &mat[i][j]);
			if(j == 2){
				somac+= mat[i][j];
			}
		}
	}

   printf("\nimprimindo uma matriz completa:\n");
   for (i = 0; i < 3; i++)
    {
   		for (j = 0; j < 3; j++)
	{
	  	printf ("%d\t", mat[i][j]);
	}
		printf("\n");
    } 
	
	for (i = 0; i < 3; i++)
    {
   		for (j = 0; j < 3; j++)
	{
	  	if(mat[i][j] % 2 == 0){
	  		par += mat[i][j];		
		  }	 	  		
	}
	printf("\n");
    } 
    
    
    Maior = mat[1][0];  // assume que o primeiro é o maior
    for(j=0; j < 3; j++){
    	if (mat[1][j] > Maior){
    		 Maior = mat[1][j];
	}
		}
       
    printf("O maior elemento da coluna 2 é: %d\n",Maior);
	printf("\n\nVetor com a soma da coluna %d: %d\n", j, somac);
	printf("\n");
    printf("\nA soma de números pares da matriz é: %d\n", par);
}
