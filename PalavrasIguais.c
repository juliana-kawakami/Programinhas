//Faça um programa que leia 2 palavras de até
//20 letras e verifique se as mesmas são idênticas.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char palavra1[21];
    char palavra2[21];
    int tam1, tam2;
    int iguais = 0;
    
    printf("Digite a primeira palavra:");
    gets(palavra1);
    printf("Digite a segunda palavra:");
    gets(palavra2);
    
    tam1 = strlen(palavra1);
    tam2 = strlen(palavra2);
    int i=0;
    if(tam1==tam2){
        while(palavra1[i] != '\0'){
            if(palavra1[i]==palavra2[i]){
            printf("A letra %c é igual no índice %d  \n", palavra1[i], i);
            iguais++;
            }
            
            else if(palavra1[i]!=palavra2[i]){
                printf("As letras %c e %c de índice %d são diferentes  \n", palavra1[i], palavra2[i], i);
            }
                
        i++;
        }
    }
    
    
    if(iguais==tam1){
        printf("As palavras são iguais");
    }
    else{
        printf("as palavras são diferentes");
    }
    return 0;
    }
