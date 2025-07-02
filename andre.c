#include <stdio.h>

int main (void){
    printf("Olá mundo \n");
}

float celsius_para_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float celsius_para_kelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheit_para_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

float fahrenheit_para_kelvin(float fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

float kelvin_para_celsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvin_para_fahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

void conversor_temperatura(float valor, char escala_origem) {
    if (escala_origem == 'C' || escala_origem == 'c') {
        printf("%.2f°C = %.2f°F = %.2fK\n", valor, celsius_para_fahrenheit(valor), celsius_para_kelvin(valor));
    }
    else if (escala_origem == 'F' || escala_origem == 'f') {
        printf("%.2f°F = %.2f°C = %.2fK\n", valor, fahrenheit_para_celsius(valor), fahrenheit_para_kelvin(valor));
    }
    else if (escala_origem == 'K' || escala_origem == 'k') {
        printf("%.2fK = %.2f°C = %.2f°F\n", valor, kelvin_para_celsius(valor), kelvin_para_fahrenheit(valor));
    }
    else {
        printf("Escala inválida. Por favor, insira 'C' para Celsius, 'F' para Fahrenheit ou 'K' para Kelvin.\n");
    }
}

int main() {
    float valor;
    char escala_origem;

    printf("Digite a temperatura: ");
    scanf("%f", &valor);

    printf("Digite a escala de origem (C para Celsius, F para Fahrenheit, K para Kelvin): ");
    scanf(" %c", &escala_origem);

    conversor_temperatura(valor, escala_origem);

    return 0;
}
