//Considere que há duas filiais de uma empresa;
//Este é um programa que soma o total dos produtos em ambas as filiais.

#include <stdio.h>

int main()
{
    int filial1[5];
    int filial2[5];
    int total[5];
    int soma = 0;
    
    for(int i = 0;i < 5; i++){
        printf("Digite a quantidade do produto %d no estoque 1:\n", i);
        scanf("%d", &filial1[i]);
        }
        
    for(int i = 0;i < 5; i++){
        printf("Digite a quantidade do produto %d no estoque 2:\n", i);
        scanf("%d", &filial2[i]);
        }
        
    for(int i = 0; i < 5; i++){
        total[i] = filial1[i] + filial2[i];
        printf("O total do produto %d nas duas filiais deu %d \n", i, total[i]);
    }

    return 0;
}
