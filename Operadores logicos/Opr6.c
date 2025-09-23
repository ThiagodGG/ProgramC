#include <stdio.h>

int main(){

int idade, dependentes;
float renda;

printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Digite sua renda mensal: ");
scanf("%f", &renda);
printf("Digite o numero de dependentes: ");
scanf("%d", &dependentes);


if(idade >= 18 && idade < 65){
    if(renda < 3000){
        if(dependentes > 2){
            printf("Você atende a todos os criterios! \n");
        } else {
            printf("Você não atende ao criterio dependentes! \n");
        }
    } else {
        printf("Você não atende ao criterio renda! \n");
    }

} else {
    printf("Você não atende ao criteiro idade! \n");
}









return 0;


}