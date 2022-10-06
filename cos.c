#include <stdio.h>
#include <math.h>

int main()
{
    int X;
    int termos = 1;
    float precisao;
    float ValorCos1 = 1;
    
    printf("Digite o valor de X:  \n");
    scanf("%d", &X);
    
    while(precisao!=1/100){
        if(termos%2==0){
        ValorCos1 = ValorCos1 - X*X/2;
        }
        else if(termos%2!=0){
        ValorCos1 = ValorCos1 + X*X/2;
        }
        precisao = (cos(X) - ValorCos1);
    }
    
    
    
    return 0;
}
