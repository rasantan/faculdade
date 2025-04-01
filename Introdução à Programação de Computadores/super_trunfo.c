
#include <stdio.h>

int main() {
    // ===== DECLARAÇÃO DE VARIÁVEIS PARA AS DUAS CARTAS =====

    // Variáveis para a primeira carta
    char estado1;                // Letra de A a H
    char codigo1[4];             // Código no formato "A01"
    char cidade1[50];            // Nome da cidade (até 50 caracteres)
    unsigned long int populacao1; // População em milhares
    float area1;                 // Área em km²
    float pib1;                  // PIB em bilhões de reais
    int pontosTuristicos1;       // Quantidade de pontos turísticos

    float densidade1;            // Densidade populacional (hab/km²)
    float pibPerCapita1;         // PIB per capita (R$ por habitante)

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2;
    float pibPerCapita2;

    // ===== CADASTRO DA PRIMEIRA CARTA =====
    printf("===== CADASTRO DA PRIMEIRA CARTA =====\n");

    // Leitura do estado (letra de A-H)
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Espaço antes de %c para ignorar espaços anteriores

    // Leitura do código (ex: A01)
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    // Leitura do nome da cidade (permite espaços)
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // %[^\n] lê até a quebra de linha

    // Leitura dos dados numéricos
    printf("Populacao (milhares de hab): ");
    scanf("%lu", &populacao1);

    printf("Area (km/quadrados): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes R$): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== CADASTRO DA SEGUNDA CARTA =====
    printf("\n===== CADASTRO DA SEGUNDA CARTA =====\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao (milhares de hab): ");
    scanf("%lu", &populacao2);

    printf("Area (km/quadrados): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes R$): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== CÁLCULOS DAS MÉTRICAS =====
    // Cálculos para a primeira carta
    densidade1 = (populacao1 * 1000) / area1; // Converte milhares para habitantes
    pibPerCapita1 = (pib1 * 1e9) / (populacao1 * 1000); // Converte bilhões para reais

    // Cálculos para a segunda carta
    densidade2 = (populacao2 * 1000) / area2;
    pibPerCapita2 = (pib2 * 1e9) / (populacao2 * 1000);

    // ===== EXIBIÇÃO DOS RESULTADOS =====
    printf("\n\n=== CARTA 1 - %s (%s) ===\n", codigo1, cidade1);
    printf("Estado: %c\n", estado1);
    printf("Populacao: %lu mil hab\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("\n=== CARTA 2 - %s (%s) ===\n", codigo2, cidade2);
    printf("Estado: %c\n", estado2);
    printf("Populacao: %lu mil hab\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}
