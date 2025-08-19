#include <stdio.h>

int main() {
    
    int codigo1, populacao1, pontosTuristicos1;
    char nome1[50];
    float area1, pib1;

    
    int codigo2, populacao2, pontosTuristicos2;
    char nome2[50];
    float area2, pib2;

    // ===== CADASTRO DA CARTA 1 =====
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== CADASTRO DA CARTA 2 =====
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== EXIBIÇÃO DAS CARTAS =====
    printf("\n======= Carta 1 =======\n");
    printf("Codigo: %d\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n======= Carta 2 =======\n");
    printf("Codigo: %d\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;

    printf("novo commit\n");

}
