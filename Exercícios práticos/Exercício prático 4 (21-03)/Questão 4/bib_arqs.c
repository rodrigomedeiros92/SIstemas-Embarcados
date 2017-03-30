#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bib_arqs.h"

int tam_arq_texto(char *nome_arquivo)
{

	int tam;	
	FILE *arq;	
	
	
	strcat(nome_arquivo,".txt"); // Concatena a string com para criar um arquivo txt
	
	arq = fopen (nome_arquivo,"r"); // Abre o arquivo em modo de leitura
	if (!arq)
		{		
		printf ("Erro na abertura do arquivo\n");
		exit(-1);
		}
	
	fseek(arq,0,SEEK_END); // Movimenta a posição de leitura para o seu fim
	tam=ftell(arq); // Retorna a posição de leitura em bytes	
	tam--;// DEcrementa 1 , pois a leitura é após a última letra	
	
	fclose(arq);
	return tam;
}

