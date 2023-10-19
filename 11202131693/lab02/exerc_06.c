//Exercicio 06
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

int verifica_simetria(int M[][MAX], int l, int c){
    int i, j;

    for (i = 0; i < (l); i++)
        for (j = 0; j < (c); j++)
            if(M[i][j] != M[j][i])
                return 0;

    return 1;
}

void matriz_simetrica(int a[][MAX], int l, int c) {
    int e_simetrica;

    e_simetrica = verifica_simetria(a, l, c);

    if (e_simetrica == 1)
        printf("A matriz e simetrica");

    else
        printf("A matriz nao e simetrica");

}

int main(){
    int l,c, matriz_a[MAX][MAX];

    printf("Digite a quantidade de linhas da matriz: ");
    l = le_inteiro();

    printf("Digite a quantidade de colunas da matriz: ");
    c = le_inteiro();

    printf("\n");
    printf("Digite os valores da Matriz: \n");
    le_matriz(matriz_a, l, c);

    printf("\n");
    matriz_simetrica(matriz_a, l, c);

    return 0;
}