/*
Escreva um algoritmo em C que faça a apresentação formatada de:
a) um quadrado de tamanho 5x5. Exemplo:
X X X X X
X X X X X
X X X X X
X X X X X
X X X X X
b) Pergunte ao usuário qual o tamanho do quadrado que ele quer que
seja desenhado, e o desenhe.

FOCO: ESCREVER UM ALGORITIMO QUE FACA UM QUADRADO COM X E APOS ISSO
PERGUNTAR AO USUARIO QUAL A MEDIDA DO QUADRADO ELE QUER QUE DESENHE

LOGICA: USAR O FOR E O PRINTF PARA MONTAR O QUADRADO 5X5, APOS ISSO,
CRIAR INTEIROS PARA QUE O USUARIO POSSA ESCOLHER A PROPORCAO DO DESENHO
*/

#include <stdio.h>

int main(){
    //DECLARACAO
    int tamanho;

    //A) QUADRADO 5X5
    printf("Quadrado 5x5:\n");
    for (int i = 0; i < 5; i++) { //linha
        for (int j = 0; j < 5; j++) { //coluna
            printf("X ");
        }
        printf("\n");
    }
    //B) ENTRADA
    printf("\nDigite o tamanho do quadrado: ");
    scanf("%d", &tamanho);

    //PROCESSAMENTO E SAIDA
    printf("\nQuadrado %dx%d:\n", tamanho, tamanho);
    for (int i = 0; i < tamanho; i++) {         // linha
        for (int j = 0; j < tamanho; j++) {     // coluna
            printf("X ");
        }
        printf("\n");  
    }

}