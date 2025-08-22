#include <stdio.h>

int main() {
    // Passo 1: Declaração das variaveis
    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Passo 2: Pedir e guardar as informações da carta 1
    printf ("---Cadastro da Carta1---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s, codigo_carta1");
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("Digitea população: ");
    scanf(" %d", &populacao1);
    printf("Digite a area (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    //Passo 2: Pedir e guardar as informações da carta 2
    printf ("---Cadastro da Carta2---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: A02): ");
    scanf("%s, codigo_carta2");
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("Digitea população: ");
    scanf("%d", &populacao2);
    printf("Digite a area (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Passo 3: Mostrar Relátorio da Carta 1
    printf("\n--- Carta 1---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero e Pontos Turistico: %d\n", pontos_turisticos1);

    // Passo 3: Mostrar Relátorio da Carta 2
    printf("\n--- Carta 2---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero e Pontos Turistico: %d\n", pontos_turisticos2);



    return 0;
}
