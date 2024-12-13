#include <stdio.h>

// Funções de conversão


double comprimento(double valor, char* de, char* para) {
    // Conversões de comprimento
}


double massa(double valor, char* de, char* para) {
    // Conversões de massa
}


double volume(double valor, char* de, char* para) {
    // Conversões de volume
}


double temperatura(double valor, char* de, char* para) {
// Conversões de temperatura
}


double velocidade(double valor, char* de, char* para) {
    // Conversões de velocidade
}


double potencia(double valor, char* de, char* para) {
    // Conversões de potência
}


double area(double valor, char* de, char* para) {
    // Conversões de área
}

int main() {
    double valor;
    int sel; 
    char de[50], para[50];

    // Menu de categorias
    printf("Escolha a categoria de conversao:\n");
    printf("1.Comprimento 2.Massa 3.Volume 4.Temperatura 5.Velocidade 6.Potencia 7.Area: ");
    scanf("%d", &sel);
    
    printf("Digite o valor para conversao: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem: ");
    scanf("%s", de);

    printf("Digite a unidade de destino: ");
    scanf("%s", para);

    switch(sel) {
        case 1: 
            printf("Resultado da conversao: %.2f\n", comprimento(valor, de, para));
            break;
        case 2: 
            printf("Resultado da conversao: %.2f\n", massa(valor, de, para));
            break;
        case 3: 
            printf("Resultado da conversao: %.2f\n", volume(valor, de, para));
            break;
        case 4: 
            printf("Resultado da conversao: %.2f\n", temperatura(valor, de, para));
            break;
        case 5: 
            printf("Resultado da conversao: %.2f\n", velocidade(valor, de, para));
            break;
        case 6: 
            printf("Resultado da conversao: %.2f\n", potencia(valor, de, para));
            break;
        case 7:
            printf("Resultado da conversao: %.2f\n", area(valor, de, para));
            break;
        default:
            printf("Categoria invalida!\n");
            break;
    }


    return 0;
}

