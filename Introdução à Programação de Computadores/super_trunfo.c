#include <stdio.h>

int main() {
    // Declaracao das variaveis para a primeira carta
    char estado1;
    char codigo1[4];  // Tamanho 4 para acomodar 3 caracteres (ex: A01) + caractere de finalizacao
    char cidade1[50]; // Tamanho suficiente para nomes de cidades
    unsigned long int populacao1; // Populacao em milhares
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variaveis para densidade populacional, PIB per capita e Super Poder da primeira carta
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Declaracao das variaveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2; // Populacao em milhares
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Variaveis para densidade populacional, PIB per capita e Super Poder da segunda carta
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Instrucoes para o usuario
    printf("===== CADASTRO DE CARTAS DO SUPER TRUNFO DE PAISES =====\n\n");
    printf("Vamos cadastrar duas cartas do jogo.\n\n");

    // Leitura dos dados da primeira carta
    printf("--- CARTA 1 ---\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // Permite nomes com espacos
    printf("Digite a populacao (milhares de habitantes): ");
    scanf("%lu", &populacao1);
    printf("Digite a area (km/quadrado): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculo da densidade populacional e PIB per capita da primeira carta
    densidadePopulacional1 = (populacao1 * 1000) / area1; // Convertendo milhares para habitantes
    pibPerCapita1 = (pib1 * 1e9) / (populacao1 * 1000);  // Convertendo PIB de bilhoes para reais e populacao para habitantes

    // Calculo do Super Poder da primeira carta
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    printf("\n");

    // Leitura dos dados da segunda carta
    printf("--- CARTA 2 ---\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a populacao (milhares de habitantes): ");
    scanf("%lu", &populacao2);
    printf("Digite a area (km/quadrado): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculo da densidade populacional e PIB per capita da segunda carta
    densidadePopulacional2 = (populacao2 * 1000) / area2; // Convertendo milhares para habitantes
    pibPerCapita2 = (pib2 * 1e9) / (populacao2 * 1000);  // Convertendo PIB de bilhoes para reais e populacao para habitantes

    // Calculo do Super Poder da segunda carta
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    printf("\nComparacao de Cartas:\n");

    // Comparacao dos atributos e exibicao no formato solicitado
    if (populacao1 > populacao2) {
        printf("Populacao: Carta %s - %s venceu\n", codigo1, cidade1);
    } else {
        printf("Populacao: Carta %s - %s venceu\n", codigo2, cidade2);
    }

    if (area1 > area2) {
        printf("Area: Carta %s - %s venceu\n", codigo1, cidade1);
    } else {
        printf("Area: Carta %s - %s venceu\n", codigo2, cidade2);
    }

    if (pib1 > pib2) {
        printf("PIB: Carta %s - %s venceu\n", codigo1, cidade1);
    } else {
        printf("PIB: Carta %s - %s venceu\n", codigo2, cidade2);
    }

    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turisticos: Carta %s - %s venceu\n", codigo1, cidade1);
    } else {
        printf("Pontos Turisticos: Carta %s - %s venceu\n", codigo2, cidade2);
    }

    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Densidade Populacional: Carta %s - %s venceu\n", codigo1, cidade1);
    } else {
        printf("Densidade Populacional: Carta %s - %s venceu\n", codigo2, cidade2);
    }

    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta %s - %s venceu\n", codigo1, cidade1);
    } else {
        printf("PIB per Capita: Carta %s - %s venceu\n", codigo2, cidade2);
    }

    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta %s - %s venceu\n", codigo1, cidade1);
    } else {
        printf("Super Poder: Carta %s - %s venceu\n", codigo2, cidade2);
    }

    return 0;
}
