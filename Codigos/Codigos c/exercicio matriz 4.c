#include <stdio.h>

int main()
{

    int mat[2][2];
    int vet1[2];
    int vet2[2];
    int i, j, aux1 = 0, aux2 = 0;
   
    printf("Digite os 4 valores para preencher a sua matriz:");
    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("\ndigite o valor para [%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf("\n");
    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            if(i == 1 && j == 0 ){
                printf("\n");
            }
            printf("%d\t", mat[i][j]);
            
        }
    }
    printf("\n");
    printf("\n");
    
    aux1 = mat[0][0];
    aux2 = mat[0][1];
    mat[0][0] = mat[1][0];
    mat[0][1] = mat[1][1];
    mat[1][0] = aux1;
    mat[1][1] = aux2;

    
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            if(i == 1 && j == 0 ){
                printf("\n");
            }
        	 printf("%d\t", mat[i][j]);
}
}
}
