#include <stdio.h>
#include <math.h>

int main()
{
    int LA=0, LB=0, LC=0;
    float area;
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
                
                S = (float) (LA+LB+LC) / 2;
                
                area = sqrt(S*(S-LA)*(S-LB)*(S-LC));
                
                printf("A area do triangulo eh %.2f. \n", area);
                
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
                else{
                    if(LA>LC){
                        MaiorL = LB;
                        L1 = LC;
                        L2 = LA;
                    }
                    else{
                        if(LB>LC){
                            MaiorL = LB;
                            L1 = LC;
                            L2 = LA;
                        }
                        else{
                            MaiorL = LC;
                            L1 = LB;
                            L2 = LA;
                        }
                    }
                }
                
                printf("O maior lado eh %d.  \n", MaiorL);
                
                int A, B, C;
                
                A = MaiorL*MaiorL;
                B = L1*L1;
                C = L2*L2;
                
                if(A==B+C){
                    printf("O triangulo eh retangulo!");
                }
                else if(A>B+C){
                    printf("O triangulo eh obtusangulo!");
                }
                else{
                    printf("O triangulo eh acutangulo!");
                }
                
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
