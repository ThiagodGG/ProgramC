#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5


int main (){

int vetor[5];

for (int i = 0; i < 5; i++){
    vetor [i] = i *2;
}

for (int i = 0; i < 5; i++){
    printf("Vetor[%d] = %d\n", i, vetor[i]);
}

int matriz [3][3];

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        matriz[i][j] = i + j;
        printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
    }
}

int vetor2[5] = {1,2,3,4,5};
int soma = 0;

for (int i = 0; i < 5; i++){
    soma += vetor2[i];
}

printf("A soma dos elementos do vetor é: %d\n", soma);

int matriz1[2][2] = {{1, 2}, {3, 4}};
int matriz2[2][2] = {{5, 6}, {7, 8}};
int matrizsoma [2][2];

for (int i = 0; i < 2; i++){
    for (int j = 0; j < 2; j++){
        matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
        printf("matrizsoma [%d][%d] = %d\n", i, j,
matrizsoma[i][j]);
    }
}

int matriz3 [LINHAS][COLUNAS];

int soma2 = 0;

for(int i = 0; i < LINHAS; i++){
    for(int j = 0; j < COLUNAS; j++){
        soma2++;
        matriz3[i][j] = soma2;
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}


    return 0;
}