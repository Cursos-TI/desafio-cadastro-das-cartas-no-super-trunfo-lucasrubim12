#include <stdio.h>

int main() {
    
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome); 

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    
    printf("\n--- Carta Cadastrada ---\n");
    printf("Codigo: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
}