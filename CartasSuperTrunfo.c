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
    float densidade1;
    float pibpercapita1;

    // CARTA 2

    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibpercapita2;

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

    // CÁLCULOS CARTA 1

    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

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

    // CÁLCULOS CARTA 2
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);

    // CARTA 2

    printf("\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    
    return 0;
}
