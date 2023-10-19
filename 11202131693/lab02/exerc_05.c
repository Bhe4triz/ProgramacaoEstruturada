//Exercicio 05
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

void transposta_matriz(int a[][MAX], int l, int c, int resultado[][MAX]) {
    int i, j;

    for (i = 0; i < l; i++)
        for (j = 0; j < c; j++)
            resultado[j][i] = a[i][j];

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
    int l,c, matriz_a[MAX][MAX], resultado[MAX][MAX];

    printf("Digite a quantidade de linhas da matriz: ");
    l = le_inteiro();

    printf("Digite a quantidade de colunas da matriz: ");
    c = le_inteiro();

    printf("\n");
    printf("Digite os valores da Primeira Matriz: \n");
    le_matriz(matriz_a, l, c);

    printf("\n");
    printf("A transposta da matrizes e: \n");
    transposta_matriz(matriz_a, l, c, resultado);
    imprime_matriz(resultado, c, l);

    return 0;
}