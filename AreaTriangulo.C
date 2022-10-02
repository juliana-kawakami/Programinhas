/*Dados 3 números inteiros (LA, LB, LC), verificar se estes números formam um
triângulo, isto é, verificar se cada um dos lados de um triângulo é menor que a soma dos
outros dois lados.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int LA=0, LB=0, LC=0;
    float area, X;
    float S;
    
    printf("Digite um numero inteiro positivo para o lado A:");
    scanf("%d", &LA);
    printf("Digite um numero inteiro positivo e diferente para o lado B:");
    scanf("%d", &LB);
    printf("Digite um numero inteiro positivo e diferente para o lado C:");
    scanf("%d", &LC);
        while(LA<0){
            printf("ERRO \nDigite outro valor para o lado A:");
            scanf("%d", &LA);
        }
        while(LB<0){
            printf("ERRO \nDigite outro valor para o lado B:");
            scanf("%d", &LB);
        }
        while(LC<0){
            printf("ERRO  \nDigite outro valor para o lado C:");
            scanf("%d", &LC);
        }

    if(LA<LB+LC){
        if(LB<LA+LC){
            if(LC<LA+LB){
                printf("Os lados digitados formam um triangulo!\n");
                
                S = (LA+LB+LC) / 2;
                
                area = sqrt(S*(S-LA)*(S-LB)*(S-LC));
                
                printf("A area do triangulo é %.2f \n", area);
                
                int MaiorL, L1, L2;
                
                if(LA>LB){
                    if(LB>LC){
                        MaiorL = LA;
                    }
                    else{
                        if(LA>LC){
                            MaiorL = LA;
                        }
                        else{
                            MaiorL = LC;
                        }
                    }
                }
                else if(LB>LA)
                
                
                
            }
            else{
                printf("Os lados digitados não formam um triangulo!\n");
            }
        }
        else{
            printf("Os lados digitados não formam um triangulo!\n");
        }
    }
    else{
        printf("Os lados digitados não formam um triangulo!\n");
    }
    
    
    
    return 0;
}
