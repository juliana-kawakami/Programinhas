
#include <stdio.h>
#include <math.h>

#define TAM 3

typedef struct{
    int x;
    int y;
}Ponto;

int main()
{
    Ponto pontos[TAM];
    float dist[5];
    int aux;
    
    
    for(int i=0; i<TAM; i++){
        printf("Digite o valor de x no ponto %d:", i);
        scanf("%d", &pontos[i].x);
        printf("Digite o valor de y no ponto %d:", i);
        scanf("%d", &pontos[i].y);
    }
    
    for(int i=0; i<TAM; i++){
        aux = (pontos[i].x * pontos[i].x) + (pontos[i].y * pontos[i].y);
        dist[i] = sqrt(aux);
        printf("A distãncia dos pontos digitados é: %.2f  \n", dist[i]);
    }

    return 0;
}
