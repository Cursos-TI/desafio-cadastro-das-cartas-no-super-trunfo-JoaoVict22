#include <stdio.h>

int main() {
    char estado1, estado2;
    
    char codigo1[20], codigo2[20];
    
    char cidade1[50], cidade2[50];

    int populacao1, populacao2;

    float area1, area2;

    float pib1, pib2;
    
    int pontos_turisticos1, pontos_turisticos2;

    // Carta 1
    printf("Digite o estado: ");
    scanf(" %c", &estado1);  

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1); 

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    // Carta 2
    printf("\nDigite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}
