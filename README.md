# Conversor de Unidades em C

Este repositório contém um conjunto de programas em **C** para converter entre diversas unidades de medida. Cada tipo de conversão foi implementado em um arquivo de código separado para facilitar a organização e manutenção do projeto.

## Funcionalidades

O projeto é composto por diferentes arquivos para converter unidades em várias categorias. Os arquivos de código são:

- **converter-comprimento.c** – Converte entre as unidades de comprimento: metro (m), centímetro (cm), milímetro (mm).
- **converter-massa.c** – Converte entre as unidades de massa: quilograma (kg), grama (g), tonelada (t).
- **converter-volume.c** – Converte entre as unidades de volume: litro (L), mililitro (mL), metro cúbico (m³).
- **converter-velocidade.c** – Converte entre as unidades de velocidade: km/h, m/s, mph.
- **converter-area.c** – Converte entre as unidades de área: metro quadrado (m²), centímetro quadrado (cm²).
- **converter-temperatura.c** – Converte entre as unidades de temperatura: Celsius (°C), Fahrenheit (°F), Kelvin (K).
- **converter-potencia.c** – Converte entre as unidades de potência: Watts (W), Quilowatts (kW), Cavalos-vapor (cv ou hp).
- **converter-tempo.c** – Converte entre as unidades de tempo: segundos (s), minutos (min), horas (h).
- **converter-armazenamento.c** – Converte entre as unidades de armazenamento: bits, bytes, KB, MB, GB, TB.

Cada arquivo contém uma função que executa as conversões para a categoria correspondente.

## Como Usar

1. **Clone o repositório** para o seu computador:

    ```bash
    git clone https://github.com/seu-usuario/conversor-unidades.git
    ```

2. **Entre no diretório do projeto**:

    ```bash
    cd conversor-unidades
    ```

3. **Compile os arquivos de código** usando o compilador C, como o `gcc`. Por exemplo, para compilar o arquivo de conversão de comprimento:

    ```bash
    gcc -o conversor-comprimento converter-comprimento.c
    gcc -o conversor-massa converter-massa.c
    gcc -o conversor-volume converter-volume.c
    gcc -o conversor-velocidade converter-velocidade.c
    gcc -o conversor-area converter-area.c
    ```

4. **Execute o programa compilado** correspondente ao tipo de conversão que você deseja realizar. Por exemplo, para a conversão de comprimento:

    ```bash
    ./conversor-comprimento
    ```

5. O programa irá exibir um menu interativo onde você pode escolher a unidade que deseja converter e inserir o valor. O resultado será mostrado em outras unidades.

## Exemplos de Uso

### 1. **Conversão de Comprimento**

1. Execute o programa:

    ```bash
    ./conversor-comprimento
    ```

2. O menu aparecerá, e você poderá escolher a unidade de comprimento (metro, centímetro, milímetro) e inserir o valor a ser convertido.

### 2. **Conversão de Massa**

1. Execute o programa:

    ```bash
    ./conversor-massa
    ```

2. Selecione a unidade de massa (quilograma, grama, tonelada) e digite o valor a ser convertido.

## Testes e Depuração

Cada programa foi testado para garantir que as conversões estão corretas. Se você encontrar algum erro ou se o programa não funcionar como esperado, por favor, **abra um issue** para reportar o problema.

## Contribuições

Contribuições são bem-vindas! Se você deseja adicionar novos recursos, corrigir bugs ou melhorar o código, sinta-se à vontade para abrir uma **issue** ou enviar um **pull request**.

## Licença

Este projeto está licenciado sob a **MIT License** - veja o arquivo [LICENSE](LICENSE) para mais detalhes.

