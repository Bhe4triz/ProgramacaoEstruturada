//Nome: Bheatriz Almeida Santos de Jesus
//RA: 11202131693

/*1. Escreva um programa que receba um caractere e uma frase e que imprima a frase ate
a primeira ocorrencia do caractere fornecido. O seu programa funciona corretamente mesmo que o
caractere fornecido nao apareca na frase? Veja o exemplo abaixo.
Entrada: 
,
A vida eh como uma caixa de chocolates, voce nunca sabe o que vai encontrar."
Saida: A vida eh como uma caixa de chocolates */

#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 100000

typedef struct epigrafo{
    char caratere;
    char frase[MAX];
} Texto;

int acha_caractere(char c, char f[]){
    int i;

    for (i = 0; f[i] != '\0'; i++) //'\0' e o final da string, testar depois
        if (f[i] != c)
            printf("%c", f[i]);
        else
            break;
    
    return 0;
};

int main () {
    int i;
    Texto f;

    printf("Digite o caratere e em seguida a frase: \n");
    scanf("%c", &f.caratere);
    getchar();

    fgets(f.frase, MAX, stdin); //scan do texto
    acha_caractere(f.caratere,f.frase);

    return 0;
};
