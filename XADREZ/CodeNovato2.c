#include <stdio.h>

int main (){

    int numero;

    do 
    {
        printf("Digite um numéro PAR para sair do programa...\n");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d é PAR!\n", numero);
        } else {
            printf("%d é IMPAR!\n", numero);
        }

    } while (numero % 2 != 0);

    printf("Você digitou um numero par, saindo do programa...");

    return 0;
}
