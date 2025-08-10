#include <stdio.h>

int main() {
    float temperatura, celsius, fahrenheit, kelvin;
    char escala;

    printf("=== Conversor de Temperatura ===\n");

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Digite a escala de origem (C, F ou K): ");
    scanf(" %c", &escala);

    if (escala == 'C' || escala == 'c') {
        fahrenheit = (temperatura * 9 / 5) + 32;
        kelvin = temperatura + 273.15;
        printf("Fahrenheit: %.2f\nKelvin: %.2f\n", fahrenheit, kelvin);
    }
    else if (escala == 'F' || escala == 'f') {
        celsius = (temperatura - 32) * 5 / 9;
        kelvin = celsius + 273.15;
        printf("Celsius: %.2f\nKelvin: %.2f\n", celsius, kelvin);
    }
    else if (escala == 'K' || escala == 'k') {
        celsius = temperatura - 273.15;
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Celsius: %.2f\nFahrenheit: %.2f\n", celsius, fahrenheit);
    }
    else {
        printf("Escala inválida. Use C, F ou K.\n");
    }

    return 0;
}
