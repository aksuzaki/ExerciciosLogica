
#include <stdio.h>

void calcularGratis(int A[], int gratis[]) {
    int i;

    for (i = 0; i < 500; i++) {
        gratis[i] = A[i] / 15;
    }
}

int main() {
    int A[500], gratis[500];
    int i;

    for (i = 0; i < 500; i++) {
        printf("Filmes retirados pelo cliente %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    calcularGratis(A, gratis);

    for (i = 0; i < 500; i++) {
        printf("Cliente %d: %d locacoes gratis\n",
               i + 1, gratis[i]);
    }

    return 0;
}

