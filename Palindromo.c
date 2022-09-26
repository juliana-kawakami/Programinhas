#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char palavra[21];
    int tam;
    printf("Digite uma palavra: \n");
    gets(palavra);
    tam = strlen(palavra) - 1;
    int igual=0;
    int diferente=0;
    
    int i=0;
    int j = tam;
    
    while(i<=j){
        if(palavra[i]==palavra[j]){
            printf("A letra no indice %d e no indice %d é a letra %c  \n", i, j, palavra[i]);
            igual++;
        }
        else{
            printf("Palavras diferentes  \n");
            diferente++;
        }
        i++;
        j=tam-i;
    }
    
    
    
    if(diferente == 0){
        printf("A palavra é um palíndromo");
    }
    else{
        printf("A palavra não é um palíndromo");
    }
    
    return 0;
}
