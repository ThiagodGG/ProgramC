#include <stdio.h>

int main(){

int idade;
float renda;

printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Digite sua renda mensal: ");
scanf("%f", &renda);

if(idade <= 18 || idade >= 60){
    if (renda < 2000){
        printf("Você tem direito ao desconto! \n");
    } else {
        printf("Você não tem direito ao desconto devido a renda! \n");
    } 
    printf("Aceito com relação a idade");
} else {
    printf("Você não atende aos criterios devido a idade");
}





}
   







