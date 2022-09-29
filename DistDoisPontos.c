
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

typedef struct Ponto{
    int x;
    int y;
}ponto1, ponto2;

int main()
{
    struct Ponto ponto1, ponto2;
    float dist;
    int X, Y, aux;
    
    printf("Digite o valor de x no ponto 1:");
    scanf("%d", &ponto1.x);
    printf("Digite o valor de y no ponto 1:");
    scanf("%d", &ponto1.y);
    
    printf("Digite o valor de x no ponto 2:");
    scanf("%d", &ponto2.x);
    printf("Digite o valor de y no ponto 2:");
    scanf("%d", &ponto2.y);
    
    X = (ponto2.x - ponto1.x);
    Y = (ponto2.y - ponto1.y);
    
    aux = (X * X) + (Y * Y);
    
    dist = sqrt(aux);
    
    printf("A distãncia dos pontos digitados é: %.2f", dist);

    return 0;
}
