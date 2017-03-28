#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

int main(void)
{
	char nome[20];
	char cpy [20];	
	int idade;
	FILE *arq;
	
	
	printf("Digite o seu nome: ");
	scanf("%s",nome);
	

	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	
	strcpy(cpy,nome); // Copia o conteúdo de uma string na outra
	strcat(cpy,".txt"); // Concatena a string com para criar um arquivo txt
	
	arq = fopen(cpy, "w");	// Abre arquivo no modo de escrita
	if (!arq)
		{		
		printf ("Erro na abertura do arquivo");
		exit(-1);
		}
	fprintf(arq,"Nome:%s \n",nome); // Escreve no arquivo
	fprintf(arq,"Idade:%d anos \n",idade);
	
	fclose(arq);
	
	return 0;
}
