#include <stdio.h>

int main()
{
    // 1. criação e armazenamento das variáveis (CARTA 1 e CARTA 2)
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];

    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // ================= CADASTRANDO A CARTA 1 =================
    printf("--- CADASTRO DA CARTA 1 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a populacao da cidade: ");
    scanf(" %d", &populacao1);
    printf("Digite a area da cidade: ");
    scanf(" %f", &area1);
    printf("Digite o Pib da cidade: ");
    scanf(" %f", &pib1);
    printf("Digite os pontos turisticos: ");
    scanf(" %d", &pontosturisticos1);

    // ================= CADASTRANDO A CARTA 2 =================
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex B02): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a populacao da cidade: ");
    scanf(" %d", &populacao2);
    printf("Digite a area da cidade: ");
    scanf(" %f", &area2);
    printf("Digite o Pib da cidade: ");
    scanf(" %f", &pib2);
    printf("Digite os pontos turisticos: ");
    scanf(" %d", &pontosturisticos2);

    // 4. print para exibição dos dados das duas cartas
    printf("\n=== DADOS DA CARTA 1 (%s) ===\n", cidade1);
    printf("Populacao: %d | Area: %.2f km² | Pib: %.2f | Pontos: %d\n", populacao1, area1, pib1, pontosturisticos1);

    printf("\n=== DADOS DA CARTA 2 (%s) ===\n", cidade2);
    printf("Populacao: %d | Area: %.2f km² | Pib: %.2f | Pontos: %d\n", populacao2, area2, pib2, pontosturisticos2);

    return 0;
}