//Exercicio 07
//Nome: Bheatriz Almeida Santos de Jesus
//RA: 11202131693

#include <stdio.h>
#include <math.h>
#define MAX 100

int le_inteiro(int tamanho){
    int n;
    scanf("%d", &n);

    while (n > tamanho || n < 1){
        printf("Numero invalido, por favor digite algum numero entre 1 e %d: ", tamanho);
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

void troca_matriz(int M[][MAX], int c, int l2, int l3){
    int i, aux;

    for (i = 0; i < c; i++){
        aux = M[l2-1][i];
        M[l2-1][i] = M[l3-1][i];
        M[l3-1][i]= aux;
    }
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
    int l,c,l2,l3, matriz_a[MAX][MAX];

    printf("Digite a quantidade de linhas da matriz: ");
    l = le_inteiro(MAX);

    printf("Digite a quantidade de colunas da matriz: ");
    c = le_inteiro(MAX);

    printf("\n");
    printf("Digite os valores da Matriz: \n");
    le_matriz(matriz_a, l, c);

    printf("\n");
    printf("Digite um numero entre 1 e %d: ", l);
    l2 = le_inteiro(l);

    printf("Digite um numero entre 1 e %d: ", l);
    l3 = le_inteiro(l);


    printf("\n");
    troca_matriz(matriz_a, c, l2, l3);
    imprime_matriz(matriz_a, l, c);

    return 0;
}