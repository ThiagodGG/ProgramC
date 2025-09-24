#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int opcao, regras;
int numeroSecreto, palpite;

printf("Menu Principal!\n");
printf("1. Iniciar Jogo\n");
printf("2. Ver Regras\n");
printf("3. Sair\n");
printf("escolha uma opção: ");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    srand(time(0));
    numeroSecreto = rand() % 10;
    printf("Digite um numero de 0 a 9: ");
    scanf("%d", &palpite);
    if (numeroSecreto == palpite)
    {
        printf("Você acertou! \n");
        printf("Numero secreto %d\n", numeroSecreto);
    } else {
        printf("Você errou! \n");
        printf("Numero secreto %d\n", numeroSecreto);
    }
    break;
case 2:
    printf("A explicação das regras:\n");
    printf("Digite a opção relacionada as regras do jogo!\n");
    scanf("%d", &regras);
    switch(regras){
    case 1:
        printf("Regra 1:\nVocê ganha se acertar o mesmo numero do que o computador!\n");
        break;
    case 2:    
        printf("Regra 2: \nVocê deve escolher somente numeros de 0 a 9!\n");
        break;
    }
    break;
case 3:
    printf("Saindo do jogo!\n");
    break;
default:
    printf("Opção Invalida");
    break;
}





return 0;
}