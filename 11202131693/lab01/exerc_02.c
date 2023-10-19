//Bheatriz Almeida Santos de Jesus; RA: 11202131693
#include <stdio.h>

int verifica_primo(int j, int i){
    int e_primo = 1;

    while (j<=i){
        if (i%j == 0 && j!=i){
            e_primo = 0;
            break;
        }
        else
            j++;
        
    }
    
    if (e_primo == 1)
        printf(" %d ",i);

    return 0;
}

int le_um_numero(){
    int n;
    printf("Digite um numero para ler os primos: ");
    scanf("%d", &n);
    return n;
}

void imprime_primos(int n){
    int j=2, i; 
    
    for ( i=2;i<=n; i++){
        j=2; 
        verifica_primo(j,i);
    }
} 

int main(){
    int num;
    num = le_um_numero();
    printf("Os numeros primos sao: ");
    imprime_primos(num);
    return 0;
}
