/*
Ler 10 números a serem digitados pelo usuário e armazene-os em um
VETOR ou ARRAY. Em seguida:
a) Exibir a quantidade de vezes que o número 3 está presente no vetor.
b) Depois, pergunte ao usuário qual número ele quer pesquisar (no
lugar do número 3), e diga quantas vezes este número está presente
no vetor.
c) Diga qual é o maior dos 10 números.
d) Diga qual é o menor dos 10 números.

FOCO: LER 10 NUMEROS, ARMAZENAR E PROCESSAR DE ACORDO COM A), B), C) E D);

LÓGICA: LER 10 NUMEROS, ARMAZENAREM UM ARRAY, PESQUISAR VEZES QUE O NUMERO 3 
APARECE, FAZER COM QUE A PESQUISA POSSA SER ALTERADA PARA O VALOR QUE O USUARIO
DESEJAR E RETORNAR O RESULTADO DA PESQUISA, APOS, RETORNAR O MAIOR VALOR DOS 10 
NUMEROS PASSADO PELO USUARIO E O MENOR;

*/
#include <stdio.h>

int main(){
    //DECLARACAO
    int i, numero_entrada[10], pesquisarNumero,pesquisarOutroNumero, indiceNovoNumero, maior, menor;
    pesquisarNumero = indiceNovoNumero = 0 ; //inicializar
    
    //ENTRADA E PROCESSAMENTO DO PRIMEIRO FOR-> 10 ENTRADAS -> ARMAZENAR VALORES EM ARRAY E RETORNAR QUANTIDADE DE "3" ENCONTRADOS
    for(i = 0; i <10; i++){
			printf("Digite o valor %d\n", i + 1);
			scanf("%d", &numero_entrada[i]); 
		if (numero_entrada[i] == 3){
			pesquisarNumero++;
		}
}
	printf("O numero 3 apareceu %d vezes!\n", pesquisarNumero); //SAIDA DO IF  
	
	maior = menor = numero_entrada[0]; //DECLARO VALOR MAIOR E MENOR COMO INDICE 0 DO MEU ARREY APOS OS VALORES DE CADA INDICE SEREM DEFINIDOS          
    
    //PROCESSAMENTO -> PERGUNTAR AO USUARIO QUAL NUMERO ELE QUER PESQUISAR E RETORNAR O RESULTADO
    printf("Digite o numero que deseja pesquisar no lugar do numero 3!\n");
    scanf("%d", &pesquisarOutroNumero);
    for(i = 0; i<10; i++){
    	if(numero_entrada[i] == pesquisarOutroNumero){
    	indiceNovoNumero++;
	}	
}
	printf("O numero %d apareceu %d vezes!\n", pesquisarOutroNumero, indiceNovoNumero); // SAIDA DO IF
	
	//ENCONTRAR O MAIOR E MENOR VALOR DO ARRAY UTILIZANDO TERNARIO
	for(i = 1; i < 10; i++){
		maior = (numero_entrada[i] > maior) ? numero_entrada[i] : maior;
		menor = (numero_entrada[i] < menor) ? numero_entrada[i] : menor;	
	}		
	
	//ULTIMAS SAIDAS
	
	printf("O maior numero digitado eh: %d\n", maior);
	printf("O menor numero digitado eh: %d\n", menor);
	
  
}
