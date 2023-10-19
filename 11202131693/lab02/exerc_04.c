//Exercicio 04
//Nome: Bheatriz Almeida Santos de Jesus
//RA: 11202131693

#include <stdio.h>
#include <math.h>
#define MAX 100

int le_inteiro(){
    int n;
    scanf("%d", &n);

    while (n>100 || n<1){
        printf("Numero invalido, por favor digite algum numero entre 1 e 100: ");
        scanf("%d", &n);
    }

    return n;
}

void le_matriz(int M[][MAX], int l, int c) {
    int i, j;

    for (i = 0; i < l; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &M[i][j]);

}

void soma_matriz(int a[][MAX], int b[][MAX], int l, int c, int resultado_c[][MAX]) {
    int i, j;

    for (i = 0; i < l; i++)
        for (j = 0; j < c; j++)
            resultado_c[i][j] = a[i][j] + b[i][j];

}

void imprime_matriz(int M[][MAX], int l, int c) {
    int i, j;

    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }
}

int main(){
    int l,c, matriz_a[MAX][MAX], matriz_b[MAX][MAX], matriz_c[MAX][MAX];

    printf("Digite a quantidade de linhas da matriz: ");
    l = le_inteiro();

    printf("Digite a quantidade de colunas da matriz: ");
    c = le_inteiro();

    printf("\n");
    printf("Digite os valores da Primeira Matriz: \n");
    le_matriz(matriz_a, l, c);

    printf("\n");
    printf("Digite os valores da Segunda Matriz: \n");
    le_matriz(matriz_b, l, c);

    printf("\n");
    printf("A soma das matrizes e: \n");
    soma_matriz(matriz_a, matriz_b, l, c, matriz_c);
    imprime_matriz(matriz_c, l, c);

    return 0;
}