//Exercicio 01
//Nome: Bheatriz Almeida Santos de Jesus
//RA: 11202131693

#include <stdio.h>
#include <math.h>
#define MAX 1000

int le_inteiro(){
    int n;
    scanf("%d", &n);
    return n;
}

void le_vetor(int n, int valores[]){
    int i;

    for (i = 0; i < n; i++) 
        scanf("%d", &valores[i]);
}

int busca(int valores[], int n, int chave){
    int i, tem_chave=0;

    for (i=0; i<n; i++)
        if(valores[i] == chave){
            printf("%d", i);
            tem_chave = 1;
        }

    if (tem_chave == 0)
        printf("-1");

    return 0;
}

int main (){
    int n,chave, valores[MAX];

    printf("Digite o tamanho do vetor: ");
    n = le_inteiro();

    printf("Digite os valores do vetor: ");
    le_vetor(n, valores);

    printf("Digite sua chave: ");
    chave = le_inteiro();

    busca(valores, n, chave);

    return 0;
}