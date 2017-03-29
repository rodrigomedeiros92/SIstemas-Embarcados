#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(int argc, char*argv[])
{
	char cpy[20];
	FILE *arq;	
	
	strcpy(cpy,argv[1]); // Copia o conteúdo de uma string na outra
	strcat(cpy,".txt"); // Concatena a string com para criar um arquivo txt
	
	arq = fopen (cpy,"w");
	if (!arq)
		{		
		printf ("Erro na abertura do arquivo");
		exit(-1);
		}
	fprintf(arq,"Nome: %s\n",argv[1]);
	fprintf(arq,"Idade: %s anos\n",argv[2]);
        
	fclose(arq);
	return 0;
}

