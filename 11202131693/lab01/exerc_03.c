//Bheatriz Almeida Santos de Jesus; RA: 11202131693
#include <stdio.h>


char le_entrada(){
    char t;
    printf("Digite a unidade de medida da temperatura de entrada, sendo c para Celcius e f para Fahrenheit: ");
    scanf("%c", &t);
    
    return t;    
}

void converte(char t){
    double temp;
        
    printf("Digite a temperatura a ser convertida: ");
    scanf("%lf", &temp);
    
    if (t == 'c' || t == 'C')
        printf("A temperatura em Fahrenheit e: %.2lf ", (((9*temp)/5) + 32));
    else
        printf("A temperatura em Celsius e: %.2lf ", ((5*(temp-32))/9));
} 

void main(){
    char t;
    printf("Este programa converte Celsius em Fahrenheit e vice e versa. \n");
    t = le_entrada();
    converte(t);
}
