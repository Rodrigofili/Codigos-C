#include<stdio.h>
#include<stdlib.h>
#include<locale>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("Produto 1\t=\t25.00\n");
    printf("Produto 2\t=\t47.50\n");
    printf("Produto 3\t=\t68.25\n");
    printf("-------------------\n");
    printf("Total\t=\t140,75\n");
    system("pause");
}
