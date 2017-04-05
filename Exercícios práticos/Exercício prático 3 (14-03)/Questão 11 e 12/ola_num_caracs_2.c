#include<stdio.h>
#include "num_caracs.h"

int main(int argc,char **argv)
{
	int count=0;	
	int num=0;
	int total=0;	
	
	while(count<argc)
	{
		num=num_caracs(argv[count]);
		total=total+num;
		count++;
			
	}	
	printf("Total de caracteres de entrada: %d\n" ,total);

return 0;
}
