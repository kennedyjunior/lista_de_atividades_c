/*
Gere uma matriz 3x4 de inteiros, e peça para o usuário do programa
preenchê-la. Após preenchida,
a) Informe qual foi o maior número encontrado na matriz.
b) Informe qual foi o menor número encontrado na matriz.

FOCO: GERAR UMA MATRIZ DE INTEIROS E PEDIR PARA O USUARIO PREENCHER, APOS
ISSO, INFORMAR QUAL O MAIOR E O MENOR NUMERO ENCONTRADO NA MATRIZ

LOGICA: GERAR UMA MATRIZ DE INTEIROS, IMPRIMIR UM MODELO PARA O USUARIO SE
BASEAR, E DEPOIS PEDIR PARA QUE O USUARIO PREENCHA A MESMA MATRIZ COM OS INTEIROS
QUE ELE DESEJAR, APOS ISSO, FAZER UMA RELACAO ENTRE OS VALORES E IMPRIMIR QUAL O
MAIOR E O MENOR NUMERO ENCONTRADO NA MATRIZ
*/

#include <stdio.h>  

int main(){
    //DECLARACAO
    int i, j, matriz[3][4];
    int exemplo_linha, exemplo_coluna;

    //EXEMPLO PARA O USUARIO
    printf("Esse eh um exemplo da matriz que voce ira preencher!\n");
    for (exemplo_linha = 0; exemplo_linha < 4; exemplo_linha++){
        for (exemplo_coluna = 0; exemplo_coluna < 3; exemplo_coluna++){
            printf("X \t");
        }
        printf("\n");
    }
    printf("\n");
    
    //ENTRADA
    printf("Agora digite os numeros inteiros que voce ira usar para preencher a matriz!\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            scanf("%d\t", &matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    //PROCESSAMENTO E SAIDA
    printf("Esse foi o resultado da matriz digitada!\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");   
    }


    
}