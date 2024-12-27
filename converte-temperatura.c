#include <stdio.h>

void celsiusParaFahrenheitKelvin(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    float kelvin = celsius + 273.15;
    printf("Celsius: %.2f °C\n", celsius);
    printf("Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Kelvin: %.2f K\n", kelvin);
}

void fahrenheitParaCelsiusKelvin(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    float kelvin = celsius + 273.15;
    printf("Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Celsius: %.2f °C\n", celsius);
    printf("Kelvin: %.2f K\n", kelvin);
}

void kelvinParaCelsiusFahrenheit(float kelvin) {
    float celsius = kelvin - 273.15;
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("Kelvin: %.2f K\n", kelvin);
    printf("Celsius: %.2f °C\n", celsius);
    printf("Fahrenheit: %.2f °F\n", fahrenheit);
}

int main() {
    int opcao;
    float valor;

    printf("Conversor de Unidades de Temperatura\n");
    printf("1. Celsius para Fahrenheit e Kelvin\n");
    printf("2. Fahrenheit para Celsius e Kelvin\n");
    printf("3. Kelvin para Celsius e Fahrenheit\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &valor);
            celsiusParaFahrenheitKelvin(valor);
            break;
        case 2:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &valor);
            fahrenheitParaCelsiusKelvin(valor);
            break;
        case 3:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &valor);
            kelvinParaCelsiusFahrenheit(valor);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
