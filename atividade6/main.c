/*
Leia dois valores, e exiba sua soma. Em seguida pergunte ao usuário:
“Novo Cálculo (S/N)?”. Deve-se ler a resposta e se a resposta for ‘S’
(sim), deve-se repetir todos os comandos (instruções) novamente,
mas se for qualquer outra resposta, o algoritmo deve ser finalizado
escrevendo a mensagem “Fim dos Cálculos”. Escolha a opção mais
adequada de comando de loop para resolver este problema.

FOCO: CRIAR UM LOOP DO TIPO DO WHILE QUE EXECUTA UM ALGORITIMO DE SOMA

LOGICA: CRIAR UM LOOP QUE LE DOIS VALORES, EXIBIR A SOMA, APOS ISSO,
PERGUNTA SE O USUARIO QUER FAZER OUTRO CALCULO, CASO RESPOSTA FOR SIM, 
REPETIR, CASO NAO, IMPRIMIR UMA MENSAGEM E FINALIZAR 
*/

#include <stdio.h>

int main(){
    //DECLARACAO
    int numero1, numero2, soma;
    numero1 = numero2 = 0;
    char resposta;

    //ENTRADA, PROCESSAMENTO E SAIDA
    do{
        printf("Digite o primeiro valor: ");
        scanf("%d", &numero1);

        printf("Digite o segundo valor: ");
        scanf("%d", &numero2);

        soma = (numero1 + numero2);
        printf("a soma dos dois numeros foi %d\n", soma);

        printf("Novo Calculo (S/N)? ");
        scanf(" %c", &resposta); //ESPACO ANTES DO %C POR CAUSA DI \n  NA LINHA 31
            
    }while (resposta == 's' || resposta == 'S');
    
    printf("Fim dos calculos!\n");
    
    
    
    
}