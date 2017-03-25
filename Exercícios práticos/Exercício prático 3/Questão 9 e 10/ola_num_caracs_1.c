#include<stdio.h>
#include "num_caracs.h"

int main(int argc,char **argv)
{
	int count=0;	
	int num=0;	
	
	while(count<argc)
	{
		num=num_caracs(argv[count]);
		printf("Argumento: %s / Número de caracteres: %d\n",argv[count],num);
		count++;
			
	}	
	

return 0;
}
