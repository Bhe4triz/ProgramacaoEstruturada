//Exercicio 03
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

void le_vetor(int n, int valores[]){
    int i;

    for (i = 0; i < n; i++) 
        scanf("%d", &valores[i]);
}


void ordena(int valores[], int n){
    int i, j, aux = 0;

    for (i = 1; i<n; i++)
        for (j = 0; j<(n); j++)
            if(valores[i]<valores[j]){
                aux = valores[i];
                valores[i] = valores[j];
                valores[j] = aux;
            }

}

void num_ordenados(int valores[], int n){
    int i;

    for (i=0; i<n; i++){
        printf("%d ", valores[i]);
    }
}

int main(){
    int valores[MAX], n;

    printf("Digite o tamanho do vetor: ");
    n = le_inteiro();

    printf("Digite os valores do vetor: ");
    le_vetor(n, valores);

    ordena(valores,n);

    printf("Resultado dos valores em ordem crescente: \n");
    num_ordenados(valores,n);

    return 0;
}