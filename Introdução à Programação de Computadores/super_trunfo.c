#include <stdio.h>

int main() {
    // Variáveis para as cartas
    char estado1, codigo1[4], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    char estado2, codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    int opcao;

    // Cadastro das cartas
    printf("===== CADASTRO DAS CARTAS =====\n");
        // ===== CADASTRO DA PRIMEIRA CARTA =====
    printf("===== CADASTRO DA PRIMEIRA CARTA =====\n");

    // Leitura do estado (letra de A-H)
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    // Leitura do código (ex: A01)
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    // Leitura do nome da cidade
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


    // Cálculos (igual ao nível novato)
    densidade1 = (populacao1 * 1000) / area1;
    pibPerCapita1 = (pib1 * 1e9) / (populacao1 * 1000);
    densidade2 = (populacao2 * 1000) / area2;
    pibPerCapita2 = (pib2 * 1e9) / (populacao2 * 1000);

    // Menu interativo
    do {
        printf("\n\n=== MENU DE COMPARACAO ===\n");
        printf("1 - Comparar Populacao\n");
        printf("2 - Comparar Area\n");
        printf("3 - Comparar PIB\n");
        printf("4 - Comparar Pontos Turisticos\n");
        printf("5 - Comparar Densidade Populacional\n");
        printf("6 - Comparar PIB per Capita\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Populacao: %d\n", (populacao1 > populacao2) ? 1 : 0);
                break;
            case 2:
                printf("Area: %d\n", (area1 > area2) ? 1 : 0);
                break;
            case 3:
                printf("PIB: %d\n", (pib1 > pib2) ? 1 : 0);
                break;
            case 4:
                printf("Pontos Turisticos: %d\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);
                break;
            case 5:
                printf("Densidade Populacional: %d\n", (densidade1 < densidade2) ? 1 : 0);
                break;
            case 6:
                printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while(opcao != 0);

    return 0;
}
