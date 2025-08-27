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
    float densidadePop;       // Densidade populacional
    float pibPerCapita;       // PIB per capita
};

// Função para cadastrar carta
void cadastrarCarta(struct Carta *c) {
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &c->estado);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%3s", c->codigo);

    printf("Informe o Nome da Cidade: ");
    scanf(" %49[^\n]", c->nomeCidade);

    printf("Informe a População: ");
    scanf("%d", &c->populacao);

    printf("Informe a Área (em km²): ");
    scanf("%f", &c->area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &c->pib);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &c->pontosTuristicos);

    // Cálculos
    c->densidadePop = (c->area > 0) ? (c->populacao / c->area) : 0;
    c->pibPerCapita = (c->populacao > 0) ? ((c->pib * 1000000000.0) / c->populacao) : 0;
}

// Função para exibir carta
void exibirCarta(struct Carta c) {
    printf("\nCarta:\n");
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidadePop);
    printf("PIB per Capita: %.2f reais\n", c.pibPerCapita);
}

int main() {
    struct Carta carta1, carta2;

    printf("Desafio Super Trunfo\n");

    printf("\n=== Cadastro da Carta 1 ===\n");
    cadastrarCarta(&carta1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    cadastrarCarta(&carta2);

    printf("\n=== Exibição da Carta 1 ===\n");
    exibirCarta(carta1);

    printf("\n=== Exibição da Carta 2 ===\n");
    exibirCarta(carta2);

    return 0;
}
