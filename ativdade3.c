#include <stdio.h>

void converterVolume() {
    double valor, resultado;
    int opcaoOrigem, opcaoDestino;

    printf("Conversor de Unidades de Volume\n");
    printf("Escolha a unidade de origem:\n");
    printf("1. Litros (L)\n");
    printf("2. Mililitros (mL)\n");
    printf("3. Metros Cúbicos (m^3)\n");
    printf("Opção: ");
    if (scanf("%d", &opcaoOrigem) != 1 || opcaoOrigem < 1 || opcaoOrigem > 3) {
        printf("Erro: Opção de origem inválida! Encerrando o programa.\n");
        return;
    }

    printf("Escolha a unidade de destino:\n");
    printf("1. Litros (L)\n");
    printf("2. Mililitros (mL)\n");
    printf("3. Metros Cúbicos (m^3)\n");
    printf("Opção: ");
    if (scanf("%d", &opcaoDestino) != 1 || opcaoDestino < 1 || opcaoDestino > 3) {
        printf("Erro: Opção de destino inválida! Encerrando o programa.\n");
        return;
    }

    printf("Digite o valor a ser convertido: ");
    if (scanf("%lf", &valor) != 1 || valor < 0) {
        printf("Erro: Valor inválido! Encerrando o programa.\n");
        return;
    }

    // Conversão
    if (opcaoOrigem == 1) { // Litros
        if (opcaoDestino == 1) resultado = valor;               // Litros -> Litros
        else if (opcaoDestino == 2) resultado = valor * 1000;   // Litros -> Mililitros
        else if (opcaoDestino == 3) resultado = valor / 1000;   // Litros -> Metros Cúbicos
    } else if (opcaoOrigem == 2) { // Mililitros
        if (opcaoDestino == 1) resultado = valor / 1000;        // Mililitros -> Litros
        else if (opcaoDestino == 2) resultado = valor;          // Mililitros -> Mililitros
        else if (opcaoDestino == 3) resultado = valor / 1e+6;   // Mililitros -> Metros Cúbicos
    } else if (opcaoOrigem == 3) { // Metros Cúbicos
        if (opcaoDestino == 1) resultado = valor * 1000;        // Metros Cúbicos -> Litros
        else if (opcaoDestino == 2) resultado = valor * 1e+6;   // Metros Cúbicos -> Mililitros
        else if (opcaoDestino == 3) resultado = valor;          // Metros Cúbicos -> Metros Cúbicos
    } else {
        printf("Erro inesperado!\n");
        return;
    }

    printf("Resultado: %.2lf\n", resultado);
}

int main() {
    converterVolume();
    return 0;
}
