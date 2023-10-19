//Bheatriz Almeida Santos de Jesus; RA: 11202131693;
#include <stdio.h>


// Em C é necessário declarar os nomes das funções antes da min ou as funções em si, pois ele le de cima pra baixo;
int le_um_numero();
int imprime_pares();

int main(){
    int num;
    num = le_um_numero();
    imprime_pares(num);
    return 0;
}

int le_um_numero(){
    int n;
    printf("Digite um número para mostrar os pares: ");
    scanf("%d", &n);
    return n;
}

int imprime_pares(int n){
    int i = 0;
    printf("Os pares são: ");
    for (i; i<=n; i++)
        if (i%2 == 0)
            printf("%d ", i);
    return 0;
}
