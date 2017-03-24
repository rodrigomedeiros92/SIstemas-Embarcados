#include <stdio.h>
#include "num_caracs.h"

int main(int argc, char *argv[])
{

	int count;
	int num=0; 

	for(count=0; count <= argc; count++)	
	{		
		num=num_caracs(argv[count]);		
		printf("Argumentos: %s / Numero de caracteres %d",argv[count],num);
        }
	return 0;
}

