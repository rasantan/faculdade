#include <stdio.h>

int main() {
    // Variáveis para as cartas
    char estado1, codigo1[4], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;
    float superPoder1;

    char estado2, codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;
    float superPoder2;

    int opcao;

    // Cadastro das cartas
    printf("===== CADASTRO DE CARTAS SUPER TRUNFO =====\n\n");

    // Carta 1
    printf("--- CARTA 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao (milhares): ");
    scanf("%lu", &populacao1);
    printf("Area (km quadrados): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes R$): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao (milhares): ");
    scanf("%lu", &populacao2);
    printf("Area (km quadrados): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes R$): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos dos atributos
    densidade1 = (populacao1 * 1000) / area1;
    pibPerCapita1 = (pib1 * 1e9) / (populacao1 * 1000);
    superPoder1 = (populacao1 * 1000) + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    densidade2 = (populacao2 * 1000) / area2;
    pibPerCapita2 = (pib2 * 1e9) / (populacao2 * 1000);
    superPoder2 = (populacao2 * 1000) + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Menu de comparação
    do {
        printf("\n=== MENU DE COMPARACAO ===\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("7 - Super Poder\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("%d\n", (populacao1 > populacao2) ? 1 : 0);
                break;
            case 2:
                printf("%d\n", (area1 > area2) ? 1 : 0);
                break;
            case 3:
                printf("%d\n", (pib1 > pib2) ? 1 : 0);
                break;
            case 4:
                printf("%d\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);
                break;
            case 5:
                printf("%d\n", (densidade1 < densidade2) ? 1 : 0);
                break;
            case 6:
                printf("%d\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
                break;
            case 7:
                printf("%d\n", (superPoder1 > superPoder2) ? 1 : 0);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
}
