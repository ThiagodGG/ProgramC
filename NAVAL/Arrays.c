#include <stdio.h>

int main(){

    float notas [3] =  {85.5, 90.0, 78.3}; //Array de notas

    printf("Nota do aluno 1 é: %.1f \n", notas[0]);
    printf("Nota do aluno 2 é: %.1f \n", notas[1]);
    printf("Nota do aluno 3 é: %.1f \n", notas[2]);
    printf("\n");

    char letras[4] = {'A', 'B', 'C', 'D'}; //Array de letras

    printf("Primmeira letra: %c \n", letras[0]);
    printf("Segunda letra: %c \n", letras[1]);
    printf("Terceira letra: %c \n", letras[2]);
    printf("Quarta letra: %c \n", letras[3]);
    printf("\n");
 
    char *nomes[] = {"Alice", "Bob", "Carol"};
    int i;

    for(i = 0; i < 3; i++) 
    {
        printf("%s\n", nomes[i]);
    }
   printf("\n");

    int numeros[5]; //Declaração de valor de inteiros

    //Inicializando elelmentos do vetor
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;

    //Acessando elementos do vetor
    printf("O primeiro elelmento é %d\n", numeros[0]);
    printf("O segundo elemento é: %d\n", numeros[1]);
    printf("\n");

    int index;

    char * nomesAlunos [3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("Digite o numero do aluno que queira ver as notas... \n");
    printf("Para o Aluno 0, digite 0 \n");
    printf("Para o Aluno 1, digite 1 \n");
    printf("Para o Aluno 2, digite 2 \n");

    scanf("%d", &index);

    printf("As notas do %s são: %s, %s... \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
    printf("\n");

    return 0;
}