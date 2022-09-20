//Programa que lê o primeiro vetor e imprime o segundo vetor;
//Considerando que o segundo vetor é o inverso do primeiro;

#include <stdio.h>

int main()
{
    int vetor[5];
    int inverso[5];
    int k=75;
    for(int i = 0;i < 5; i++){
        printf("Digite o numero do vetor na posição %d :\n", i);
        scanf("%d", &vetor[i]);
    
    }   
    for(int i = 0; i < 5; i++){
        k = 4 - i;
        inverso[k] = vetor[i];
        }
    for(int i = 0; i < 5; i++){
        printf("o valor do vetor inverso na posição %d é %d  \n", i, inverso[i]);
    }
    return 0;
}
