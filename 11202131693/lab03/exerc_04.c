//Nome: Bheatriz Almeida Santos de Jesus
//RA: 11202131693

/*4. Escreva um programa que leia uma palavra e uma frase e retorne “sim” se a palavra
aparece na frase e “nao”, caso contrário. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 1000

typedef struct epigrafo{
    char palavra[MAX];
    char frase[MAX];
} Texto;

int acha_palavra(char palavra[], char frase[]){
    int i,j,temPalavra = 0;

    for (i = 0; frase[i] != '\0'; i++){ 
        for (j = 0; palavra[j] != '\0'; j++){
            if(palavra[j] == frase[i+j]){
                temPalavra = 1;     
            }
            else{
                temPalavra = 0;
                break;
            }
        }

         if (temPalavra == 1){
            break;
        }
    }
    return temPalavra;
};

int main () {
    int i;
    Texto f;

    printf("Digite a palavra e em seguida a frase: \n");
    fgets(f.palavra, MAX, stdin); 
    getchar();

    fgets(f.frase, MAX, stdin); //scan do texto
    
    if(acha_palavra(f.palavra,f.frase) == 1){
        printf("sim");
    }
    else{
        printf("nao");
    }

    return 0;
};
