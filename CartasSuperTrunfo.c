#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    int cidade1;
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    int cidade2;
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Novos atributos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o numero da cidade (1-4): ");
    scanf("%d", &cidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo dos novos atributos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o numero da cidade (1-4): ");
    scanf("%d", &cidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos novos atributos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos dados
    printf("\n--- Carta 1 ---\n");
    printf("Codigo: %c%02d\n", estado1, cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Codigo: %c%02d\n", estado2, cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;
}