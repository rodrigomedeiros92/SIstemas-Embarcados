#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char url[]="Ola Mundo.txt";
	FILE *arq;
	
	arq = fopen(url, "w");
	if (!arq)
		{		
		printf ("Erro na abertura do arquivo");
		exit(-1);
		}

	fprintf(arq,"Ola Mundo");
	fclose(arq);
	
	return 0;
}
