#include <stdio.h>

int main(){

int idade;

printf("Digite a sua idade: \n");
scanf("%d", &idade);

//Criança < 12
//Adolescente 12 <= x < 18
//Adulto 18 <= x < 60
//Idoso > 60


if(idade > 60){
    printf("Você é um idoso que vai de Vasco!\n ");
} else if (idade <= 60 && idade > 18){
    printf("Você é um CLT lascado da vida!\n ");
} else if (idade <= 18 && idade > 12){
    printf("Você é um beta! \n ");
} else {
    printf("Você é uma criança \n");
}


}