/*
Escreva um algoritmo em C para ler seu nome completo. Use o
modificador para a máscara da “%s” para aceitar espaços e caracteres
especiais. Use também a biblioteca <string,h> e a função strlen() para
saber o tamanho da string e utilizá-lo no controle dos loops. Em
seguida exiba o nome de três formas diferentes:
a) texto normal, utilizando a máscara de formatação string (%s).
b) caractere a caractere em ordem crescente dos índices (do começo
para o fim).
c) caractere a caractere em ordem decrescente dos índices (do fim para
o começo).
d) converter toda string para letras maiúsculas e mostrar, e depois
para minúsculas e mostrar. Pesquise e utilize as funções TOUPPER() e
TOLOWER().
e) exiba cada uma das palavras do seu nome em linhas diferentes.
Ex.: João da Silva Cavalcanti.
João
da
Silva
Cavalcanti
f) exiba cada uma das palavras do seu nome do último para o primeiro
em linhas diferentes.
Ex.: João da Silva Cavalcanti.
Cavalcanti
Silva
da
João

FOCO: ESCREVER UM ALGORITMO QUE LE UM NOME COMPLETO E EXIBIR O NOME DE TRES FORMAS DIFERENTES
1- TEXTO NORMAL, UTILIZANDO MASCARA DE FORMATACAO
2- CARACTERE EM CARACTERE EM ORDEM CRESCENTE DO INDICE
3- CARACTERE EM CARACTERE EM ORDEM DECRESCENTE DO INDICE
APOS ISSO CONVERTER TODA A STRING PARA LETRA MAIUSCULA E IMPRIMIR, DEPOIS PARA MINUSCULA E IMPRIMIR
USANDO AS FUNCOES TOUPPER() E TOLOWER().
EXIBIR CADA PARTE DO NOME EM LINHAS DIFERENTES
EXIBIR CADA PARTE DO NOME DE FORMA DECRESCENTE

LOGICA: UTILIZAR PRINTF E SCANF PARA LER O NOME COMPLETO DO USUARIO, FORMATAR O NOME E IMPRIMIR 
PARA FORMA 1, 2 E 3, APOS ISSO FAZER A CONVERSAO COM TOUPPER() E TOLOWER(), EXIBIR CADA PARTE DO NOME EM
LINHAS DIFERENTES USANDO \n TANTO DO PRIMEIRO PARA O ULTIMO QUANTO DO ULTIMO PARA O PRIMEIRO
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    //DECLARACOES
    char nome[256];
    int i, tamanho;

    //ENTRADA
    printf("Digite seu nome completo:\n");
    fgets(nome, sizeof(nome), stdin);
    
    nome[strcspn(nome, "\n")] = '\0';

    tamanho = strlen(nome);

    //SAIDA FORMA 1
    printf("\n--- Forma 1: Texto normal ---\n");
    printf("%s\n", nome);

    //SAIDA FORMA 2
    printf("\n--- Forma 2: Caractere por caractere (ordem crescente) ---\n");
    for (i = 0; i < tamanho; i++) {
        printf("%c", nome[i]);
    }
    printf("\n");

    //SAIDA FORMA 3
    printf("\n--- Forma 3: Caractere por caractere (ordem decrescente) ---\n");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }
    printf("\n");

    //PROCESSAMENTO NOME MAIUSCULO, MINUSCULO
    char nome_maiusculo[256];
    char nome_minusculo[256];
    strcpy(nome_maiusculo, nome);
    strcpy(nome_minusculo, nome);

    for (i = 0; i < tamanho; i++) { //TRANSFORMA EM MAIUSCULO
        nome_maiusculo[i] = toupper(nome_maiusculo[i]);
    }

    for (i = 0; i < tamanho; i++) { //TRANSFORMA EM MINUSCULO   
        nome_minusculo[i] = tolower(nome_minusculo[i]);
    }

    //SAIDA MAIUSCULA
    printf("\n--- Nome em MAIUSCULAS ---\n");
    printf("%s\n", nome_maiusculo);

    //SAIDA MINUSCULA
    printf("\n--- Nome em minusculas ---\n");
    printf("%s\n", nome_minusculo);

    //PROCESSAMENTO NOME DIVIDIDO POR LINHA(CRESCENTE)
    printf("\n--- Nome dividido por linha (crescente) ---\n");
    char nome_copia[100];
    strcpy(nome_copia, nome);

    //SAIDA CRESCENTE
    char *palavra = strtok(nome_copia, " ");
    while (palavra != NULL) {
        printf("%s\n", palavra);
        palavra = strtok(NULL, " ");
    }

    printf("\n--- Nome dividido por linha (decrescente) ---\n");
    char palavras[10][30]; 
    int cont = 0;

    strcpy(nome_copia, nome);
    palavra = strtok(nome_copia, " ");
    while (palavra != NULL) {
        strcpy(palavras[cont], palavra);
        cont++;
        palavra = strtok(NULL, " ");
    }

    //SAIDA DECRESCENTE

    for (i = cont - 1; i >= 0; i--) {
        printf("%s\n", palavras[i]);
    }
}