/*
Um restaurante durante o mês de fevereiro, armazenou diariamente a
quantidade de refeições vendidas. Determine em que dia do mês
ocorreu o maior número de vendas e qual foi a quantidade de refeições
vendida nesse dia. A partir do enunciado, faça o planejamento
conforme praticado em sala de aula.

FOCO: DETERMINAR QUAL DIA DO MES DE FEVEREIRO(28 DIAS) OCORREU O MAIOR NUMERO
DE VENDAS E QUAL FOI A QUANTIDADE DE REFEICOES VENDIDAS NESSE DIA.

LÓGICA: CAPTAR 28 ENTRADAS REFERENTE A QUANTIDADE DE REFEICOES VENDIDAS NO DIA,
DETERMINAR EM QUAL DIA O RESTAURANTE VENDEU MAIS E QUAL A QUANTIDADE VENDIDA NO DIA.
*/

#include <stdio.h>

int main(){
    //DECLARACAO
    int i, dia_da_semana[28], melhor_dia, maior_valor;
    melhor_dia = 0; //INICIALIZAR  

    //ENTRADA
    for(i = 0; i < 5; i++){
        printf("Digite a quantidade de refeicoes vendidas no dia %d\n", i+1 );
        scanf("%d", &dia_da_semana[i]);
    }

    maior_valor = dia_da_semana[0]; //ASSOCIAR $melhor_dia COMO INDICE 0 DE $dia_da_semana
    
    //PROCESSAMENTO
    for(i=0; i < 5; i++){ 
        if( maior_valor < dia_da_semana[i]){
            maior_valor = dia_da_semana[i];
            melhor_dia = i;
        }
    }
    //SAIDA
    printf("O dia %d do mes de fevereiro foi o que mais vendeu. com %d refeicoes vendidas!", melhor_dia + 1, maior_valor); //SOMAR +1 AO $melhor_dia POIS SEM ISSO ELE IRA IMPRIMIR O INDICE