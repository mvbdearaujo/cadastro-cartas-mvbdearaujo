#include <stdio.h>

int main() {  

    // CARTA 1

    char estado1;
    char codigo1[5];
    char cidade1[50];

    unsigned long int populacao1;

    float area1;
    float pib1;

    int pontos1;

    float densidade1;
    float pibpercapita1;
    float superpoder1;

    // CARTA 2

    char estado2;
    char codigo2[5];
    char cidade2[50];

    unsigned long int populacao2;

    float area2;
    float pib2;

    int pontos2;

    float densidade2;
    float pibpercapita2;
    float superpoder2;

    // ===== ENTRADA DOS DADOS =====

    // CARTA 1

    printf("O Estado é: ");
    scanf(" %c", &estado1);

    printf("O código é: ");
    scanf("%s", codigo1);

    printf("A cidade é: ");
    scanf("%s", cidade1);

    printf("A população é: ");
    scanf("%lu", &populacao1);

    printf("A área é: ");
    scanf("%f", &area1);

    printf("O PIB é: ");
    scanf("%f", &pib1);

    printf("O número de pontos turísticos é: ");
    scanf("%d", &pontos1);

    // CÁLCULOS CARTA 1

    densidade1 = (float) populacao1 / area1;

    pibpercapita1 = pib1 / (float) populacao1;

    superpoder1 =
        (float) populacao1 +
        area1 +
        pib1 +
        pontos1 +
        pibpercapita1 +
        (1 / densidade1);

    // CARTA 2

    printf("\n");

    printf("O Estado é: ");
    scanf(" %c", &estado2);

    printf("O código é: ");
    scanf("%s", codigo2);

    printf("A cidade é: ");
    scanf("%s", cidade2);

    printf("A população é: ");
    scanf("%lu", &populacao2);

    printf("A área é: ");
    scanf("%f", &area2);

    printf("O PIB é: ");
    scanf("%f", &pib2);

    printf("O número de pontos turísticos é: ");
    scanf("%d", &pontos2);

    // CÁLCULOS CARTA 2
    
    densidade2 = (float) populacao2 / area2;

    pibpercapita2 = pib2 / (float) populacao2;

    superpoder2 =
        (float) populacao2 +
        area2 +
        pib2 +
        pontos2 +
        pibpercapita2 +
        (1 / densidade2);

    // ===== EXIBIÇÃO DOS DADOS =====

    // CARTA 1

    printf("\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    // CARTA 2

    printf("\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // COMPARAÇÃO DAS CARTAS

    printf("\n");

    printf("Comparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n",
           populacao1 > populacao2);

    printf("Área: Carta 1 venceu (%d)\n",
           area1 > area2);

    printf("PIB: Carta 1 venceu (%d)\n",
           pib1 > pib2);

    printf("Pontos Turísticos: Carta 1 venceu (%d)\n",
           pontos1 > pontos2);

    printf("Densidade Populacional: Carta 1 venceu (%d)\n",
           densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n",
           pibpercapita1 > pibpercapita2);

    printf("Super Poder: Carta 1 venceu (%d)\n",
           superpoder1 > superpoder2);
    
    return 0;
}
