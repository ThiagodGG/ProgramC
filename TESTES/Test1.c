#include <stdio.h>
#include <string.h>
#include <time.h>

int main  (){

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1, soma2;

    printf("\n----- COMPARAÇÃO DE DOIS ATRIBUTOS -----\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Demográfica\n5 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    printf("\nAgora escolha o SEGUNDO atributo (diferente do primeiro):\n");

    switch (atributo1) {
        case 1:
            printf("2 - Área\n3 - PIB\n4 - Densidade Demográfica\n5 - PIB per capita\n");
            break;
        case 2:
            printf("1 - População\n3 - PIB\n4 - Densidade Demográfica\n5 - PIB per capita\n");
            break;
        case 3:
            printf("1 - População\n2 - Área\n4 - Densidade Demográfica\n5 - PIB per capita\n");
            break;
        case 4:
            printf("1 - População\n2 - Área\n3 - PIB\n5 - PIB per capita\n");
            break;
        case 5:
            printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Demográfica\n");
            break;
        default:
            printf("\nOpção inválida! Encerrando o programa.\n");
        }

























return 0;
}