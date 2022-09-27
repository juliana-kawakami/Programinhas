
#include <stdio.h>

int main()
{
    int matriz1 [4][3];
    int matriz2 [4][3];
    int matriz3 [4][3];
    
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            printf("Digite o elemento da matriz 1 na posição de linha %d e coluna %d:", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            printf("Digite o elemento da matriz 2 na posição de linha %d e coluna %d:", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("A soma dos elementos no índice de linha %d e coluna %d é %d  \n", i, j, matriz3[i][j]);
        }
    }

    return 0;
}
