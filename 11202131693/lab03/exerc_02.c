//Nome: Bheatriz Almeida Santos de Jesus
//RA: 11202131693

/*2. Escreva um programa que devolva o tamanho da maior cadeia de 0s de uma string
Entrada: 11111010000011100111
Saida: 5 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 1000

int conta_cadeia_zeros(char cadeia[]){
    int i, contaZero = 0, maxZeros = 0;
    //0 na tabela ascii = 48

    for (i=0; cadeia[i] != '\0'; i++)
        if (cadeia[i] == 48){
            contaZero +=1;
            if (contaZero > maxZeros){
                maxZeros = contaZero;
            }
        }
        else
            if (contaZero > maxZeros){
                maxZeros = contaZero;
                contaZero = 0;
            }
            else{
                contaZero = 0;
            }
    return maxZeros;
};

int main (){
    char cadeia[MAX];
    printf("Digite a cadeia a ser lida: \n");
    fgets(cadeia, MAX, stdin);

    printf("%d",conta_cadeia_zeros(cadeia));

    return 0;
};
