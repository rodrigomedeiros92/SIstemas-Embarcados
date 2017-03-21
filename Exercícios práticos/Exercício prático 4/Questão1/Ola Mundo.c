#include <stdio.h>

int main(void)
{
	char url[]="Ola Mundo.txt";
	FILE *arq;
	
	arq = fopen(url, "w");

	fprintf(arq,"Ola Mundo");
	fclose(arq);
	
	return 0;
}
