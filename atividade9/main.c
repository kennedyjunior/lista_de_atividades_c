/*
vamos praticar seus novos conhecimentos através da resolução de um
problema real, apresentado a seguir. Leia atentamente ao contexto
real de uma empresa que comercializa produtos e quer atualizar alguns
preços de seus produtos. Após o entendimento do contexto, faça o
planejamento conforme praticado em sala de aula.

Um supermercado deseja reajustar os preços de seus produtos usando
o seguinte critério: o produto poderá́ ter seu preço aumentado ou
diminuído. Para o preço ser alterado, o produto deve atender pelo
menos uma das linhas da tabela a seguir, que estabelece a regra para
aumentar ou diminuir o preço do produto:
Faça um programa em C que receba o preço atual do produto e a venda
média mensal do produto e, com base na regra que corresponde aos
dados de entrada, calcule e mostre o novo preço.

FOCO: REAJUSTAR PRECOS DE PRODUTOS DE UM SUPERMERCADO COM BASE EM
UM ALGORITMO

ALGORITMO: USAR SWITCH CASE PARA VER EM QUAL PARAMETRO O ITEM QUE O USUARIO INSERIR
SE ENCAIXA, REALIZAR O CALCULO E IMPRIMIR O RESULTADO, LEVANDO EM CONSIDERACAO OS NUMEROS E LOGICA:

VENDA MEDIA MENSAL (UNIDADES VENDIDAS) ------ PRECO ATUAL ------ PORCENTAGEM DE AUMENTO / DIMINUICAO

MENOR QUE 500und.                      -----> ( < R$30,00) -----> AUMENTO DE 10%

ENTRE 500und.(INCLUSIVE) E 1200und.    -----> ( >= R$30,00 e <R$80,00) -----> AUMENTO DE 15%

IGUAL OU MAIOR QUE 1200                -----> ( >= R$80,00)   -----> DIMINUICAO DE 20%
*/

#include <stdio.h>

int main(){
    //DECLARACAO
    float preco_produto, dez_porcento, quinze_porcento, vinte_porcento;
    int regras, unidades_vendidas;
    //ENTRADA
    printf("Digite o preco do produto!\n");
    scanf("%f", &preco_produto);

    printf("Agora digite a quantidade media mensal de unidades vendidas desse produto!\n");
    scanf("%d", &unidades_vendidas);

    //PROCESSAMENTO
    if (preco_produto < 30.00 && unidades_vendidas < 500){
                regras = 1;

    }else if (preco_produto >=30.00 && preco_produto < 80.00 &&
            unidades_vendidas >= 500 && unidades_vendidas < 1200){
                regras = 2;

    }else if( preco_produto >= 80.00 && unidades_vendidas >= 1200){
                regras = 3;

    }else{
        regras = -1; // else para o switch case cair em default
    }

    dez_porcento = (preco_produto * 0.1) + preco_produto; //AUMENTO
    quinze_porcento = (preco_produto * 0.15) + preco_produto; //AUMENTO
    vinte_porcento = preco_produto - (preco_produto * 0.2) ;//REDUCAO

    switch(regras){
        case 1:{
            printf("O produto teve um aumento de 10%%, passando a ter o valor de R$%.2f", dez_porcento);
            break;
        }
        case 2:{
            printf("O produto teve um aumento de 15%%, passando a ter o valor de R$%.2f", quinze_porcento);
            break;
            
        }
        case 3:{
            printf("O produto teve uma reducao de 20%%, passando a ter o valor de R$%.2f", vinte_porcento);
            break;
            
        }
        default:{
            printf("O PRODUTO NAO SE ENQUADRA PARA A ATUALIZACAO DE PRECO");
        }

    }

    //SAIDA
}

