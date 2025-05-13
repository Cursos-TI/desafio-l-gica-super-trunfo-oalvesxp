#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

struct Card {
    char state;
    char code[4];
    char city[20];
    int population;
    float area; // Km²
    float pib;
    int total_turism_points;
};

int main() {
    SetConsoleOutputCP(CP_UTF8);    // set UTF-8 format
    struct Card card01 = {'S', "001", "Cidade A", 500000, 1500.0, 120.5, 10};
    struct Card card02 = {'N', "002", "Cidade B", 450000, 1000.0, 140.0, 12};

    int timer = 1000;
    int option;
    float density1, density2;

    density1 = (float)card01.population / card01.area;
    density2 = (float)card02.population / card02.area;

    printf("\nBem-vindo ao Super Trunfo!\n\n");

    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    // Get data
    printf("Digite a opção escolhida: ");
    scanf("%d", &option);

    printf("\nProcessando comparação...\n\n");
    _sleep(timer);

    switch (option) {
        case 1:
            printf("Comparando População:\n");
            printf("%s: %d habitantes\n", card01.city, card01.population);
            printf("%s: %d habitantes\n", card02.city, card02.population);

            if (card01.population > card02.population) {
                printf("\n%s venceu!\n", card01.city);
            } else if (card02.population > card01.population) {
                printf("\n%s venceu!\n", card02.city);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f Km²\n", card01.city, card01.area);
            printf("%s: %.2f Km²\n", card02.city, card02.area);

            if (card01.area > card02.area) {
                printf("\n%s venceu!\n", card01.city);
            } else if (card02.area > card01.area) {
                printf("\n%s venceu!\n", card02.city);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: R$ %.2f bi\n", card01.city, card01.pib);
            printf("%s: R$ %.2f bi\n", card02.city, card02.pib);

            if (card01.pib > card02.pib) {
                printf("\n%s venceu!\n", card01.city);
            } else if (card02.pib > card01.pib) {
                printf("\n%s venceu!\n", card02.city);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 4:
            printf("Comparando Número de Pontos Turísticos:\n");
            printf("%s: %d pontos\n", card01.city, card01.total_turism_points);
            printf("%s: %d pontos\n", card02.city, card02.total_turism_points);

            if (card01.total_turism_points > card02.total_turism_points) {
                printf("\n%s venceu!\n", card01.city);
            } else if (card02.total_turism_points > card01.total_turism_points) {
                printf("\n%s venceu!\n", card02.city);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 5:
            printf("Comparando Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", card01.city, density1);
            printf("%s: %.2f hab/km²\n", card02.city, density2);

            if (density1 < density2) {
                printf("\n%s venceu!\n", card01.city);
            } else if (density2 < density1) {
                printf("\n%s venceu!\n", card02.city);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        default:
            printf("\nOpção inválida. Tente novamente!\n");
    }

    return 0;
}