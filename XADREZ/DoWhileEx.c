#include <stdio.h>

int main(){

int num;

do {
printf("Digite um numero negativo: ");
scanf("%d", &num);

if(num >= 0){
    printf("Você digitou: %d\n", num);
}

} while (num >= 0);

printf("Numero negativo detectado:");

    return 0;
}