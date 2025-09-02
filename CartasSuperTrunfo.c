#include <stdio.h>

int main() {

    // Criando as variaveis
    int populacao_1, populacao_2, pontosturisticos_1, pontosturisticos_2;
    float area_1, area_2, pib_1, pib_2;
    char estado_1, estado_2, codcarta_1[4], codcarta_2[4], cidade_1[20], cidade_2[20];
    
    // Mostrando a mensagem "Jogo de Cartas - Super Trunfo" na tela
    printf("Jogo de Cartas - Super Trunfo\n");

    printf("- Carta 1 -\n Digite a letra que representa o estado que está na sua carta: \n");
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

    printf("Carta 1: \n - Estado: %c \n - Código da carta: %s \n - Nome da Cidade: \n", estado_1, codcarta_1, cidade_1);
    printf("População: %d - Área: %f - PIB: %f - Número de pontos turísticos: %d", pontosturisticos_1, area_1, pib_1, pontosturisticos_1);

    

    return 0;
}
