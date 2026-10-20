
#include <stdio.h>

float converter(float fahrenheit) {
    float celsius;

    celsius = (fahrenheit - 32.0) * (5.0 / 9.0);

    return celsius;
}

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = converter(fahrenheit);

    printf("Temperatura em Celsius: %.2f\n", celsius);

    return 0;
}

