#include <stdio.h>

int main() {

    // Criando as variaveis
    int populacao_1, populacao_2, pontosturisticos_1, pontosturisticos_2;
    float area_1, area_2, pib_1, pib_2;
    char estado_1, estado_2, codcarta_1[4], codcarta_2[4], cidade_1[20], cidade_2[20];
    
    // Mostrando a mensagem "Jogo de Cartas - Super Trunfo" na tela
    printf("Jogo de Cartas - Super Trunfo\n");

    printf("- Carta 1 -\n Digite a letra que representa o seu estado: \n");
    scanf("%c", &estado_1);

    printf("A letra é: %c", estado_1);

    return 0;
}
