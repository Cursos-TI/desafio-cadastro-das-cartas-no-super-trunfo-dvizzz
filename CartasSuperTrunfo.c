#include <stdio.h>

int main() {

    // Criando as variáveis
    int populacao_1, populacao_2, pontosturisticos_1, pontosturisticos_2;
    float area_1, area_2, pib_1, pib_2;
    char estado_1, estado_2, codcarta_1[4], codcarta_2[4], cidade_1[20], cidade_2[20];

    // Inicializando variáveis para evitar problemas
    populacao_1, populacao_2 = 300;
    pontosturisticos_1, pontosturisticos_2 = 4;
    area_1 = 1521.11;
    area_2 = 100.10;
    pib_1, pib_2 = 300.50;
    estado_1 = 'C';
    estado_2 = 'D';
    codcarta_1[4], codcarta_2[4] = "C03";
    cidade_1[20], cidade_2[20] = "RiodeJaneiro";
    
    // Mostrando a mensagem "Jogo de Cartas - Super Trunfo" na tela
    printf("Jogo de Cartas - Super Trunfo\n");

    printf("- Carta 1 - \n");
    // Pedindo informações ao usuário, e lendo as informações da carta 1 com printf e scanf
    printf("Digite a letra que representa o estado que está na sua carta: \n");
    scanf("%c", &estado_1);

    printf("Digite o código da carta: \n");
    scanf("%s", codcarta_1);

    printf("Digite o nome da cidade da carta: \n");
    scanf("%s", cidade_1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao_1);

    printf("Digite a área(km²) da cidade: \n");
    scanf("%f", &area_1); 

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos que há na cidade: \n");
    scanf("%d", &pontosturisticos_1);

    // Apresentando na tela as informações da carta 
    printf("Carta 1: \n - Estado: %c \n - Código da carta: %s \n - Nome da Cidade: %s \n", estado_1, codcarta_1, cidade_1);
    printf(" - População: %d \n - Área: %.2f km² \n - PIB: %.2f bilhões de reais \n - Número de pontos turísticos: %d \n", populacao_1, area_1, pib_1, pontosturisticos_1);


    printf("- Carta 2 - \n");
    // Pedindo informações ao usuário, e lendo as informações da carta 2 com printf e scanf
    printf("Digite a letra que representa o estado que está na sua carta: \n");
    scanf("%s", estado_2);

    printf("Digite o código da carta: \n");
    scanf("%s", codcarta_2);

    printf("Digite o nome da cidade da carta: \n");
    scanf("%s", cidade_2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao_2);

    printf("Digite a área(km²) da cidade: \n");
    scanf("%f", &area_2); 

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos que há na cidade: \n");
    scanf("%d", &pontosturisticos_2);

    // Apresentando na tela as informações da carta 
    printf("Carta 2: \n - Estado: %c \n - Código da carta: %s \n - Nome da Cidade: %s \n", estado_2, codcarta_2, cidade_2);
    printf(" - População: %d \n - Área: %.2f km² \n - PIB: %.2f bilhões de reais \n - Número de pontos turísticos: %d \n", populacao_2, area_2, pib_2, pontosturisticos_2);


    return 0;
}
