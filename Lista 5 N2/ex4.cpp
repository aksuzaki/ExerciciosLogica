#include <stdio.h>

float volumeEsfera(float raio) {
    float pi = 3.14;
    return (4.0 / 3.0) * pi * raio * raio * raio;
}

int main() {
    float raio, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = volumeEsfera(raio);

    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}

