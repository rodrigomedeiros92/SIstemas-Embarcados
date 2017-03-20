#include <stdio.h>

int main(int argc, char*argv[])
{
	int count;
	printf("Argumentos: ");	
	for (count=1; count<argc; count++)
	{	
 	printf("%s ",argv[count]);
        }
	printf("\n");
        return 0;
}

