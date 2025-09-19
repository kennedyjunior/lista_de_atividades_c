/*
Escreva um programa que leia o valor de 4 números inteiros. Em
seguida, deverá ser apresentado o resultado da multiplicação do
primeiro número com o terceiro número lido, e a soma do segundo
número com o quarto número lido. A partir do enunciado, faça o
planejamento conforme praticado em sala de aula.

FOCO: LER 4 INTEIROS E APRESENTAR O RESULTADO DA MULTIPLICACAO
DO PRIMEIRO NUMERO[0] COM O TERCEIRO NUMERO[2], E A SOMA DO SEGUNDO[1] NUMERO
COM O QUARTO NUMERO[3]

LOGICA: LER 4 INTEIROS, MULTIPLICAR O INDICE 0 COM O INDICE 2, SOMAR O INDICE 1
COM O INDICE 3
*/

#include <stdio.h>

int main (){
    //DECLARACAO
    int i, numeros[4], resultado_multiplicacao, resultado_soma;
    char *posicoes[] = {"primeiro","segundo","terceiro", "quarto"};
    //ENTRADA
    for(i = 0; i < 4; i++){
        printf("Digite o %s numero\n", posicoes[i]);
        scanf("%d", &numeros[i]);
    }
    
    //PROCESSAMENTO
    resultado_multiplicacao = (numeros[0] * numeros[2]);
    resultado_soma = (numeros[1] + numeros[3]);

    //SAIDA
    printf("A multiplicacao do %d com %d resulta em %d\n", numeros[0], numeros[2], resultado_multiplicacao);
    printf("A soma do %d e do %d resulta em %d\n", numeros[1], numeros[3], resultado_soma);
}