#include <stdio.h>
#define QTDALUNOS 2

struct alunosAlgoritmos
	{
		int RA;
		char Nome[30];
		float nota1;
		float nota2;
		float nota3;
		float media;
	};

int main(){
	int i;

	
	struct alunosAlgoritmos registro[i];
    
    /*Leitura dos dados*/
	for(i=0; i<QTDALUNOS; i++){
		printf("Digite o RA do aluno \n");
		scanf("%d", &registro[i].RA);
		printf("\nDigite o NOME do aluno \n");
		scanf("%s", registro[i].Nome);
		printf("\nDigite a PRIMEIRA NOTA \n");
		scanf("%f", &registro[i].nota1);
		printf("\nDigite a SEGUNDA NOTA \n");
		scanf("%f", &registro[i].nota2);
		printf("\nDigite a TERCEIRA NOTA \n");
		scanf("%f", &registro[i].nota3);
	}
    
    /*Impressão dos dados*/
	for(i=0; i<QTDALUNOS; i++){

		printf("\n\n-=-=-=-=-=-Aluno %d-=-=-=-=-=-\n", i);
		printf("RA: %d \n", registro[i].RA);
		printf("Nome: %s \n", registro[i].Nome);
		printf("Nota Prova 1: %.2f \n", registro[i].nota1);
		printf("Nota Prova 2: %.2f \n", registro[i].nota2);
		printf("Nota Prova 3: %.2f \n", registro[i].nota3);

	}
	
	/*Imprime qual a maior nota da primeira prova*/
	int posAluno;
	float maior_nota1=0;
	for(i=0; i<QTDALUNOS; i++){
	    if(maior_nota1<registro[i].nota1){
	        maior_nota1 = registro[i].nota1;
	        posAluno = i;
	    }
	    else{
	        maior_nota1 = maior_nota1;
	    }
	}
	printf("A maior nota da primeira prova foi %.2f do aluno %s \n", maior_nota1, registro[posAluno].Nome);
	
	/*Calcula a média das notas gerais*/
    float soma, media;
    soma = 0;
    media = 0;
    for(i=0; i<QTDALUNOS; i++){
        soma = soma + registro[i].nota1 + registro[i].nota2 + registro[i].nota3;
    }
	media = soma / (QTDALUNOS*3);
	
	printf("A média geral dos alunos eh %.2f  \n", media);
	
	/*Calcula a média geral de cada aluno*/
	float maiorMedia, menorMedia;
    soma = 0;
    media = 0;
    maiorMedia = 0;
    menorMedia = 10;
    for(i=0; i<QTDALUNOS; i++){
        soma = registro[i].nota1 + registro[i].nota2 + registro[i].nota3;
        registro[i].media = soma / 3;
        printf("A média do aluno de RA %d eh %.2f \n", registro[i].RA, registro[i].media);
        
        /*Verifica a maior e menos media*/
        if(maiorMedia<registro[i].media){
            maiorMedia=registro[i].media;
        }
        else{
            maiorMedia=maiorMedia;
        }
        
        if(menorMedia>registro[i].media){
            menorMedia=registro[i].media;
        }
        else{
            menorMedia=menorMedia;
        }
    }
	
	/*Aprovado ou reprovado*/
	struct alunosAlgoritmos aprovados[QTDALUNOS];
	struct alunosAlgoritmos reprovados[QTDALUNOS];
	int alunosAprovados=0;
	int alunosReprovados=0;
	for(i=0; i<QTDALUNOS; i++){
	    if(registro[i].media>=6.0){
	        aprovados[i] = registro[i];
	        alunosAprovados++;
	        
	    }
	    else{
	        aprovados[i] = registro[i];
	        alunosReprovados++;
	    }
	
	}
	
	for(i=0; i<QTDALUNOS; i++){
	    while(aprovados>0){
	        printf("APROVADO: \n");
            printf("Nome: %s \n", aprovados[i].Nome);
            printf("Media: %.2f \n", aprovados[i].media);
            alunosAprovados--;
	    }
	    while(reprovados>0){
	        printf("REPROVADO: \n");
            printf("Nome: %s \n", reprovados[i].Nome);
            printf("Media: %.2f \n", reprovados[i].media);
            alunosReprovados--;
	    }
	
	}

	return 0;
}
