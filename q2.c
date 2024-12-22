#include <stdio.h>
#include <stdlib.h> // para habilitar Configuração para UTF-8 no Windows

// Função para realizar a conversão de unidades de massa
float converterMassa(int origem, int destino, float valor) {
    if (origem == 1) {  // Quilograma
        if (destino == 2) return valor * 1000;   // Quilograma -> Grama
        if (destino == 3) return valor / 1000;   // Quilograma -> Tonelada
    } else if (origem == 2) {  // Grama
        if (destino == 1) return valor / 1000;   // Grama -> Quilograma
        if (destino == 3) return valor / 1000000; // Grama -> Tonelada
    } else if (origem == 3) {  // Tonelada
        if (destino == 1) return valor * 1000;   // Tonelada -> Quilograma
        if (destino == 2) return valor * 1000000; // Tonelada -> Grama
    }
    return valor;  // Caso de erro, retorna o valor original
}

// Função para exibir o resultado da conversão de maneira amigável
void mostrarResultado(float original, float convertido, int origem, int destino) {
    const char* unidades[] = {"Kg", "g", "T"};
    printf("\n%.2f %s é equivalente a %.2f %s\n", original, unidades[origem - 1], convertido, unidades[destino - 1]);
}

// Função para solicitar e validar a escolha do usuário
int obterSelecao(const char* mensagem, int minimo, int maximo) {
    int escolha;
    while (1) {
        printf("%s", mensagem);
        if (scanf("%d", &escolha) == 1 && escolha >= minimo && escolha <= maximo) {
            return escolha;
        } else {
            printf("Opção inválida. Por favor, tente novamente.\n");
            while (getchar() != '\n');  // Limpa o buffer
        }
    }
}

// Função principal que coordena a execução do programa
int main() {
    int unidadeOrigem, unidadeDestino;
    float valor;

    system("chcp 65001>>null"); // Configuração para UTF-8 no Windows
    while (1) {
        // Menu para escolher a unidade de origem
        unidadeOrigem = obterSelecao(
            "Conversor de Unidades de Massa\nEscolha a unidade de origem:\n1 - Quilograma\n2 - Grama\n3 - Tonelada\n4 - Sair\nDigite sua escolha: ",
            1, 4
        );

        if (unidadeOrigem == 4) {
            printf("Programa finalizado. Até logo!\n");
            break;
        }

        // Solicita o valor a ser convertido
        printf("Digite o valor que deseja converter: ");
        scanf("%f", &valor);

        // Exibe opções de unidades de destino baseadas na unidade de origem
        printf("\nAgora, escolha a unidade para a conversão:\n");
        switch (unidadeOrigem) {
            case 1: printf("2 - Grama\n3 - Tonelada\n"); break;
            case 2: printf("1 - Quilograma\n3 - Tonelada\n"); break;
            case 3: printf("1 - Quilograma\n2 - Grama\n"); break;
        }

        // Solicita a unidade de destino
        unidadeDestino = obterSelecao("Digite sua escolha: ", 1, 3);

        // Realiza a conversão e exibe o resultado
        float resultado = converterMassa(unidadeOrigem, unidadeDestino, valor);
        mostrarResultado(valor, resultado, unidadeOrigem, unidadeDestino);
    }

    return 0;
}
