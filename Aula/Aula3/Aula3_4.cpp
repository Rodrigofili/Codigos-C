#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b, aux, i, n;
    a = 0;
    b = 1;

    printf("Digite um número:\n");
    scanf("%d", &n);

    printf("%d %d",a, b);

    for(i = 0; i < n-2; i++) {

        aux = a + b;
        a = b;
        b = aux;

        printf(" %d",aux);


}
		system("pause");
}
