/*
Desafio) Em uma eleição existem três candidatos A, B, D. Escreva um
programa em C que efetue a apuração dos votos e informe a
quantidade de votos por candidatos, a quantidade de eleitores, a
quantidade de votos nulos e a quantidade de votos em branco. A partir
do enunciado, faça o planejamento conforme praticado em sala de
aula.

FOCO: EFETUAR A APURACAO DE VOTOS, INFORMANDO A QUANTIDADE DE VOTOS
QUE CADA CANDIDATO TEVE, A QUANTIDADE DE ELEITORES, A QUANTIDADE DE VOTOS
NULOS E A QUANTIDADE DE VOTOS EM BRANCO.

LOGICA: CRIAR UM ARREY COM AS OPCOES: CANDIDATOS, NULOS, BRANCOS, DELIMITAR A QUANTIDADE
ENTRADA E CRIAR UM CONTADOR PARA CADA OPCAO DE VOTO, APOIS ISSO, IMPRIMIR A QUANTIDADE DE VOTOS
DE CANDIDATO A, B, D, NULO E BRANCO.
*/

#include <stdio.h>

int main(){
    //DECLARACAO
    int candidatoA, candidatoB, candidatoD, nulo, branco, voto, i;
    candidatoA = candidatoB = candidatoD = nulo = branco = 0; //INICIALIZAR 

    //ENTRADA -> EXEMPLO 100 ELEITORES CONFIRMADOS
    for(i = 0; i < 10; i++){
        printf("Você é o eleitor de número %d\n", i + 1);
        printf("Escolha em quem vai votar:\n");
        printf("1 - Candidato A\n");
        printf("2 - Candidato B\n");
        printf("3 - Candidato D\n");
        printf("4 - Nulo\n");
        printf("5 - Branco\n");
        scanf("%d", &voto);

        //PROCESSAMENTO

        switch (voto)
            {
            case 1:
                candidatoA++;
                break;
            case 2:
                candidatoB++;
                break;
            case 3: 
                candidatoD++;
                break;
            case 4:
                nulo++;
                break;
            case 5:
                branco++;
                break;
            default:
                printf("NUMERO INVALIDO!");
                break;
            }
    }
    

    //SAIDA
    printf("O candidato A teve %d votos!\n", candidatoA);
    printf("O candidato B teve %d votos!\n", candidatoB);
    printf("O candidato D teve %d votos!\n", candidatoD);
    printf("%d votos nulos!\n", branco);
    printf("%d votos brancos!\n", nulo);
    
}