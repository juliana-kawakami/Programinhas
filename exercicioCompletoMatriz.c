#include <stdio.h>

int main(){
    int i;
    int j;
    int M[5][5];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Digite um valor inteiro: ");
            scanf("%d", &M[i][j]);
        }
    }
    int somalinha4 = 0;
    int somacoluna2 = 0;
    int somaprincipal = 0;
    int somatotal = 0;
    int somasecundaria = 0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==3){
                somalinha4 = somalinha4 + M[3][j];
            }
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(j==1){
                somacoluna2 = somacoluna2 + M[i][1];
            }
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==j){
                somaprincipal = somaprincipal + M[i][j];
            }
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==4-j){
                somasecundaria = somasecundaria + M[i][j];
            }
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            somatotal = somatotal + M[i][j];
        }
    }
    
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
    
    printf("Soma linha 4: %d\n", somalinha4);
    printf("Soma coluna 2: %d\n", somacoluna2);
    printf("Soma principal: %d\n", somaprincipal);
    printf("Soma secundaria: %d\n", somasecundaria);
    printf("Soma total: %d", somatotal);
    return 0;
}
