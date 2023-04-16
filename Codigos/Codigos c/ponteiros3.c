#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *allocateArray(int n) {
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    srand(time(NULL)); // Semente aleatória

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Preenche o array com valores aleatórios de 0 a 99
    }

    return arr;
}

void findMinMax(int *arr, int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int n = 10;
    int *arr = allocateArray(n);
    int min, max;

    findMinMax(arr, n, &min, &max);

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Minimo: %d\n", min);
    printf("Maximo: %d\n", max);

    free(arr);

    return 0;
}

