#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Objetivo: No nível aventureiro você deve calcular a Densidade Populacional e o PIB per capita

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[10], codigo2[10];   // espaço para códigos
    char nome1[50], nome2[50];       // espaço para nomes das Cidades
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;  // densidade demografica
    float capita1, capita2;        // PIB per capita

  // Área para entrada de dados
    printf("--- Cadastro Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);   // aceita espaços
    printf("População: ");
    scanf("%d", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    printf("\n--- Cadastro Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: A01): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);   // aceita espaços
    printf("População: ");
    scanf("%d", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade1 = (float)(pop1)/(area1); // densidade populacional = população / pela área
    capita1 = (float)(pib1*1000000000)/(pop1); // PIB per capita = PIB / população

    densidade2 = (float)(pop2/area2);
    capita2 = (float)(pib2*1000000000)/(pop2);

  // Área para exibição dos dados da cidade
    printf("\n--- Cartas Cadastradas ---\n");

    printf("Carta 1: %c - %s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos turísticos: %d\n",
           nome1, pop1, area1, pib1, pontos1);
    printf("Densidade Demografica: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais", capita1);       

    printf("=============================\n");

    printf("Carta 2: %c - %s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos turísticos: %d\n",
           nome2, pop2, area2, pib2, pontos2);
    printf("Densidade Demografica: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais", capita2);

    printf("=============================\n");
return 0;
} 

