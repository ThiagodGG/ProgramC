#include <stdio.h>

int main (){

int nota;

printf("Digite a sua nota: ");
scanf("&d", &nota);

//A >= 90
//B >= 80
//C >= 70
//D >= 60
//F >= 50

if (nota >= 90){
    printf("O conceito é A! \n");
} else if (nota >= 80){
    printf("O conceito é B! ");
} else if (nota >= 70){
    printf("O conceito é C! ");
} else if (nota >= 60){
    printf("O conceito é D! ");
} else if (nota >= 50){
     printf("O conceito é E! ");
} else {
    printf("Você é burro!!!! ");
}
   
}






