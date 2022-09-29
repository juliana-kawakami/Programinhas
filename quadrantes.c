
#include <stdio.h>

typedef struct Ponto{
    int x;
    int y;
}ponto1;

int main()
{
    struct Ponto ponto1;
    printf("Digite o ponto x:  \n");
    scanf("%d", &ponto1.x);
    printf("Digite o ponto y:  \n");
    scanf("%d", &ponto1.y);
    
    if(ponto1.x>0){
        if(ponto1.y>0){
            printf("O ponto (x,y) está no 1* quadrante.");
        }
        else{
            printf("O ponto (x,y) está no 4* quadrante.");
        }
    }
    else if(ponto1.y>0){
        printf("O ponto (x,y) está no 2* quadrante.");
    }
    else{
        printf("O ponto (x,y) está no 3* quadrante.");
    }
    
    return 0;
}
