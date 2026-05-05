#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    // ===== EXIBIÇÃO DOS DADOS =====    

    // CARTA 1

    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // CARTA 2

    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // ===== ENTRADA DOS DADOS =====

    // CARTA 1

    printf("O Estado é: ");
    scanf(" %c", &estado1);

    printf("O código é: ");
    scanf("%s", &codigo1);

    printf("A cidade é: ");
    scanf("%s", &cidade1);

    printf("A população é: ");
    scanf("%d", &populacao1);

    printf("A área é: ");
    scanf("%f", &area1);

    printf("A PIB é: ");
    scanf("%f", &pib1);

    printf("O número de pontos turísticos é: ");
    scanf("%d", &pontos1);

    // CARTA 2

    printf("\n");

    printf("O Estado é: ");
    scanf(" %c", &estado2);

    printf("O código é: ");
    scanf("%s", &codigo2);

    printf("A cidade é: ");
    scanf("%s", &cidade2);

    printf("A população é: ");
    scanf("%d", &populacao2);

    printf("A área é: ");
    scanf("%f", &area2);

    printf("A PIB é: ");
    scanf("%f", &pib2);

    printf("O número de pontos turísticos é: ");
    scanf("%d", &pontos2);

    // ===== EXIBIÇÃO DOS DADOS =====

    // CARTA 1

    printf("\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos: %d\n", pontos1);

    // CARTA 2

    printf("\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos: %d\n", pontos2);

    return 0;
}
