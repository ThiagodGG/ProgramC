#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int numeroJogador, numeroComputador, resultado;
char tipoComparacao;

// Gerar numero aleatorio
srand(time(0));
numeroComputador = rand() % 100 + 1; // Numero entre 1 e 100 

//Inicio do jogo
printf("Bem-Vindo ao Jogo Maior, Menor ou Igual!\n");
printf("Você deve escolher um número e o tipo de comparação.\n");
printf("M. Maior\n");
printf("N. Menor\n");
printf("I. Igual\n");


printf("Escolha a comparação: ");
scanf("%c", &tipoComparacao);

printf("Digite seu numero (Entre  1 e 100): ");
scanf("%d", &numeroJogador);

//Exibir numero do computador
//printf("O numero do computador é: %d\n", numeroComputador);


switch(tipoComparacao)
{
case 'M':
case 'm':
    printf("Você escolheu a opção maior!\n");
    resultado = numeroJogador > numeroComputador ? 1 : 0;
    break;

case 'N':
case 'n':
    printf("Você escolheu a opção menor!\n");
    resultado = numeroJogador < numeroComputador ? 1 : 0;
    break;

case 'I':
case 'i':
    printf("Você escolheu a opção igual!\n");
    resultado = numeroJogador == numeroComputador ? 1 : 0;
    break;

    default:
    printf("Opção de jogo invalida! \n");
    break;
}

printf("O numero do computador é: %d e o numero do jogador é: %d\n", numeroComputador, numeroJogador);


if (resultado == 1){
    printf("Você venceu!\n");
} else {
    printf("Você perdeu!\n");
}




return 0;
}