//Nome: Bheatriz Almeida Santos de Jesus
//RA: 11202131693

/*3.Escreva um programa que converte os caracteres maiúsculos de uma string para minúsculos e os minúsculos para maiúsculos. Suponha que só há caracteres latinos sem acentos.
Entrada: Sao Paulo
Saída: sAO pAULO */

//usar tabela ascii

#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 1000

int converte_caracteres(char cadeia[]){
    int i;
    //maiscula iniia em 65 ate 90 e minuscula 97 a 122, diferenca de 32

    for (i=0; cadeia[i] != '\0'; i++){
        if (cadeia[i]>=97 && cadeia[i]<=122)  
            cadeia[i] = cadeia[i]-32;
        
        else if(cadeia[i]>=65 && cadeia[i]<=90)
            cadeia[i] = cadeia[i]+32;
    }

    return 0;
};

int main () {
    char cadeia[MAX];
    printf("Digite a cadeia a ser lida: \n");
    fgets(cadeia, MAX, stdin);

    converte_caracteres(cadeia);
    printf("%s", cadeia);

    return 0;
};
