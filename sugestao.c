#include <stdio.h>
#include <stdlib.h> // para habilitar Configuração para UTF-8 no Windows

// Estrutura para prototipagem

// Prototipagem das funções
void menuComprimento();
void menuMassa();
void menuVolume();
void menuTemperatura();
void menuVelocidade();
void menuPotencia();
void menuArea();
void menuTempo();
void menuArmazenamento();

// Função de menu principal
void iniciarInterface() {
    char escolha;
    do {
        printf("\nMenu Principal:\n");
        printf("1. Comprimento\n");
        printf("2. Massa\n");
        printf("3. Volume\n");
        printf("4. Temperatura\n");
        printf("5. Velocidade\n");
        printf("6. Potência\n");
        printf("7. Área\n");
        printf("8. Tempo\n");
        printf("9. Armazenamento\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf(" %c", &escolha);

        switch (escolha) {
            case '1': menuComprimento(); break;
            case '2': menuMassa(); break;
            case '3': menuVolume(); break;
            case '4': menuTemperatura(); break;
            case '5': menuVelocidade(); break;
            case '6': menuPotencia(); break;
            case '7': menuArea(); break;
            case '8': menuTempo(); break;
            case '9': menuArmazenamento(); break;
            case '0': printf("Encerrando o programa...\n"); break;
            default: printf("Opção inválida! Tente novamente.\n");
        }
    } while (escolha != '0');
}

// Funções de menus específicos

// Comprimento
void menuComprimento() {
    printf("A função que calcula Unidades de comprimento (metro, centímetro, milímetro) está em implementação.\n");
    printf("Voltando ao menu principal...\n");
}

// Massa
const char *unidadesMassa[] = {"Quilograma", "Grama", "Tonelada"};

double converterMassa(int origem, int destino, double valor) {
    double fatores[] = {1.0, 1000.0, 0.001}; // Fatores de conversão para massa
    return valor * fatores[destino] / fatores[origem];
}

void menuMassa() {
    char escolhaOrigem, escolhaDestino;
    int origem, destino;
    double valor, resultado;

    do {
        printf("\nConversão de Massa:\n");
        printf("Unidades disponíveis:\n");
        for (int i = 0; i < 3; i++) {
            printf("%d. %s\n", i + 1, unidadesMassa[i]);
        }
        printf("0. Voltar ao menu principal\n");
        printf("Escolha a unidade de origem: ");
        scanf(" %c", &escolhaOrigem);

        if (escolhaOrigem == '0') {
            printf("Voltando ao menu principal...\n");
            return;
        }

        origem = escolhaOrigem - '1';
        if (origem < 0 || origem >= 3) {
            printf("Opção inválida! Tente novamente.\n");
            continue;
        }

        do {
            printf("\nEscolha a unidade de destino (diferente de origem):\n");
            for (int i = 0; i < 3; i++) {
                if (i != origem) { // Não listar a unidade de origem como destino
                    printf("%d. %s\n", i + 1, unidadesMassa[i]);
                }
            }
            printf("0. Voltar ao menu principal\n");
            printf("Escolha a unidade de destino: ");
            scanf(" %c", &escolhaDestino);

            if (escolhaDestino == '0') {
                printf("Voltando ao menu principal...\n");
                return;
            }

            destino = escolhaDestino - '1';
            if (destino < 0 || destino >= 3 || destino == origem) {
                printf("Opção inválida! Escolha uma unidade diferente da origem.\n");
            } else {
                break;
            }
        } while (1);

        printf("Digite o valor em %s: ", unidadesMassa[origem]);
        scanf("%lf", &valor);

        resultado = converterMassa(origem, destino, valor);

        printf("\nVocê escolheu converter %.2lf %s para %s.\n", valor, unidadesMassa[origem], unidadesMassa[destino]);
        printf("Resultado: %.2lf %s\n", resultado, unidadesMassa[destino]);

    } while (1);
}


// Volume
void menuVolume() {
    printf("A função que calcula Unidades de volume (litro, mililitro, metros cúbicos) está em implementação.\n");
    printf("Voltando ao menu principal...\n");
}

// Temperatura
void menuTemperatura() {
    printf("A função que calcula Unidades de temperatura (Celsius, Fahrenheit, Kelvin) está em implementação.\n");
    printf("Voltando ao menu principal...\n");
}

// Velocidade
void menuVelocidade() {
    printf("A função que calcula Unidades de velocidade (km/h, m/s, mph) está em implementação.\n");
    printf("Voltando ao menu principal...\n");
}

// Potência
void menuPotencia() {
    printf("A função que calcula Potência (W, kW, cv ou hp) está em implementação.\n");
    printf("Voltando ao menu principal...\n");
}

// Área
void menuArea() {
    printf("A função que calcula Unidades de área (metro quadrado, centímetro quadrado) está em implementação.\n");
    printf("Voltando ao menu principal...\n");
}

// Tempo
void menuTempo() {
    printf("A função que calcula Unidades de tempo (segundos, minutos, horas) está em implementação.\n");
    printf("Voltando ao menu principal...\n");
}

// Armazenamento
void menuArmazenamento() {
    printf("A função que calcula Unidades de armazenamento (bits, bytes, KB, MB, GB, TB) está em implementação.\n");
    printf("Voltando ao menu principal...\n");
}

int main() {
    system("chcp 65001>>null"); // Configuração para UTF-8 no Windows
    printf("Conversor de Unidades\n");
    iniciarInterface();
    return 0;
}
