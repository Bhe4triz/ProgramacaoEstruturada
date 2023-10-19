//Bheatriz Almeida Santos de Jesus; RA: 11202131693
#include <stdio.h>
#define MAX 1000

int le_tamanho_vetor()
{
    int i,n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    while (n < 1 || n > 100) {
        printf("Número Inválido, Digite um número entre 1 e 100: ");
        scanf("%d", &n);
    }

    return n;
}

void le_vetor(double vetor[], int n)
{
    int i = 0;
    for (i; i < n; i++) {
        scanf("%lf", &vetor[i]);
    }

}

void produto_hadamard(double u[], double v[], double resultado[], int n)
{
    int i = 0;
    for (i; i < n; i++)
        resultado[i] = u[i] * v[i];
}

void main()
{
    int n, i = 0;
    double u[MAX], v[MAX], resultado[MAX];
    n = le_tamanho_vetor();


    printf("Digite os elementos do primeiro vetor:\n");
    le_vetor(u,n);

    printf("Digite os elementos do segundo vetor:\n");
    le_vetor(v,n);

    printf("Resultado da multiplicação de Hadamard:\n");
    produto_hadamard(u, v, resultado,n);
    for (i; i < n; i++)
        printf("%.2lf ", resultado[i]);
}