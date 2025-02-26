#include <stdio.h>

int main() {
    // Declaracao das variaveis para a primeira carta
    char estado1;
    char codigo1[4];  // Tamanho 4 para acomodar 3 caracteres (ex: A01) + caractere de finalizacao
    char cidade1[50]; // Tamanho suficiente para nomes de cidades
    int populacao1;   // Agora a populacao será em milhares
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variaveis para densidade populacional e PIB per capita da primeira carta
    float densidadePopulacional1;
    float pibPerCapita1;

    // Declaracao das variaveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;   // Agora a populacao será em milhares
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Variaveis para densidade populacional e PIB per capita da segunda carta
    float densidadePopulacional2;
    float pibPerCapita2;

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
    scanf("%d", &populacao1);

    printf("Digite a area (km/quadrado): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculo da densidade populacional e PIB per capita da primeira carta
    densidadePopulacional1 = (populacao1 * 1000) / area1; // Convertendo milhares para habitantes
    pibPerCapita1 = (pib1 * 1e9) / (populacao1 * 1000);  // Convertendo PIB de bilhões para reais e população para habitantes

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
    scanf("%d", &populacao2);

    printf("Digite a area (km/quadrado): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculo da densidade populacional e PIB per capita da segunda carta
    densidadePopulacional2 = (populacao2 * 1000) / area2; // Convertendo milhares para habitantes
    pibPerCapita2 = (pib2 * 1e9) / (populacao2 * 1000);  // Convertendo PIB de bilhões para reais e população para habitantes

    printf("\n");

    // Exibicao dos dados da primeira carta
    printf("===== CARTAS CADASTRADAS =====\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d milhares de habitantes\n", populacao1);
    printf("Area: %.2f km/quadrado\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km/quadrado\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");

    // Exibicao dos dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d milhares de habitantes\n", populacao2);
    printf("Area: %.2f km/quadrado\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km/quadrado\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
