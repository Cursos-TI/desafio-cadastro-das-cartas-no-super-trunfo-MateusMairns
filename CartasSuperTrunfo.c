#include <stdio.h>

// Definição da estrutura para as cartas
struct Carta {
    char estado;              // Ex: A, B, C...
    char codigo[4];           // Ex: A01, B02
    char nomeCidade[50];      // Nome da cidade
    int populacao;            // População
    float area;               // Área em km²
    float pib;                // PIB em bilhões
    int pontosTuristicos;     // Número de pontos turísticos
};

int main() {
    struct Carta carta1, carta2;

    printf("Desafio Super Trunfo\n");

    // ============ Entrada de dados da primeira carta ============
    printf("\n=== Cadastro da Carta1 ===\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%3s", carta1.codigo);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Informe a População: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // ============ Exibição da primeira carta ============
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    // ============ Entrada de dados da segunda carta ============
    printf("\n=== Cadastro da Carta2 ===\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%3s", carta2.codigo);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Informe a População: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // ============ Exibição da segunda carta ============
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
