#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("Desafio Cartas Super Trunfo:\n");
     /* Declaração das variávies da carta 1 */
    char state1[2];
    char code1[4];
    char city1[30];
    int population1;
    float area1;
    float pib1;
    int tourist_attractions1;


    /* Input das informações pelo usuário */
    printf("Digite o estado (A-H):\n");
    scanf(" %1s", &state1);

    printf("Digite o codigo da carta (A01, B03 ...): \n");
    scanf("%3s", &code1);

    printf("Digite o nome da cidade (Manaus, Curitiba):\n");
    scanf("%s", &city1);

    printf("Digite a quantidade da populacao:\n");
    scanf("%d", &population1);

    printf("Digite a area em km² :\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o numero dos pontos turisticos:\n");
    scanf("%d", &tourist_attractions1);

    /* Exibindo os dados da Carta 1 */
    printf("\n\nCarta 1:\n");
    printf("Estado: %s\n", state1);
    printf("Codigo: %s\n", code1);
    printf("Nome da Cidade: %s\n", city1);
    printf("Populacao: %d\n", population1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Nmero de Pontos Turisticos: %d\n\n", tourist_attractions1);

    /* Declaração das variávies da carta 2 */
    char state2[1];
    char code2[3];
    char city2[30];
    int population2;
    float area2;
    float pib2;
    int tourist_attractions2;

    /* Input das informações pelo usuário */
    printf("Digite o estado (A-H):\n");
    scanf(" %c", &state2);

    printf("Digite o codigo da carta (A01, B03 ...): \n");
    scanf("%s", &code2);

    printf("Digite o nome da cidade (Manaus, Curitiba):\n");
    scanf("%s", &city2);

    printf("Digite a quantidade da populacao:\n");
    scanf("%d", &population2);

    printf("Digite a area em km² :\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o numero dos pontos turisticos:\n\n");
    scanf("%d", &tourist_attractions2);

    /* Exibindo os dados da Carta 2 */
    printf("\n\nCarta 2:\n");
    printf("Estado: %s\n", state2);
    printf("Codigo: %s\n", code2);
    printf("Nome da Cidade: %s\n", city2);
    printf("Populacao: %d\n", population2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Nmero de Pontos Turisticos: %d\n", tourist_attractions2);

    return 0;
}
