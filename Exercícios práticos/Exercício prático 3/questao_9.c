#include <stdio.h>
#include "num_caracs.h"

int main(int argc, char *argv[])
{

	int num=0;  
	int count=0;
	
	while(count<argc)
	{	
	num=num_caracs(argv[count]);	
	printf("Argumentoss: %s / Numero de caracteres: %d \n",argv[count],num);
  	count=count+1;
	}
	return 0;
}

