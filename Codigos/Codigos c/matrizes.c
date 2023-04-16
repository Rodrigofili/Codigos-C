/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main (void)
{
  setlocale (LC_ALL, "Portuguese");
  int mat[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
  int i, j;

printf("imprimindo uma linha de uma matriz:\n");
  for (j = 0; j < 3; j++)
    {
    printf ("%d", mat[0][j]);
    }
printf("\nimprimindo uma matriz completa:\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("%d", mat[i][j]);
	}
	printf("\n");
    }
}
