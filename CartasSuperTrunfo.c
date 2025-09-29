#include <stdio.h>

int main() {
    // Estrutura de uma carta
    char estado1;
    int codigo1;
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    int codigo2;
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade (1-4): ");
    scanf("%d", &codigo1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade (1-4): ");
    scanf("%d", &codigo2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados cadastrados
    printf("\n--- Carta 1 ---\n");
    printf("Codigo: %c%02d\n", estado1, codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Codigo: %c%02d\n", estado2, codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}