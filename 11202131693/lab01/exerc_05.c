//Bheatriz Almeida Santos de Jesus; RA: 11202131693
#include <stdio.h>
#define MAX 1000

// lê n inteiros fornecidos pelo usuário e armazena -os no vetor entrada
void le_vetor(int entrada[], int n){
    int i =0;
    for(i; i<n; i++)
        scanf("%d", &entrada[i]);
}

// retorna o valor mínimo do vetor v que tem n elementos
int minimo(int v[], int n){
    int i=0, min = v[0];
    
    for(i; i<n; i++)
        if(v[i]<min)
            min = v[i];
    
    return min;            
}

// retorna o valor máximo do vetor v que tem n elementos
int maximo(int v[], int n){
    int i=0, max = v[0];
    
    for(i; i<n; i++)
        if(v[i] > max)
            max = v[i];
    
    return max; 
}

// retorna a média dos elementos guardados em um vetor v de n elementos
double media(int v[], int n){
    int i = 0;
    double media = 0.00;
    
    for (i; i<n; i++)
        media += v[i];
    
    media /= n;
    
    return media;
}

//programa pincipal
int main(){
    int n, v[MAX];
    printf("Digite a quantidade de numeros  inteiros: ");
    scanf("%d",&n);
    
    printf("Digite os elementos do vetor:\n");
    le_vetor(v,n);
    
    printf("O valor minimo digitado e: %d \n", minimo(v,n));
    printf("O valor maximo digitado e: %d \n", maximo(v,n));
    printf("A media obtida e de: %.2lf \n", media(v,n));

    return 0;
}