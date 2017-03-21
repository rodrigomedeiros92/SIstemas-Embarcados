#include <stdio.h>

int main(int argc, char*argv[])
{
	char url[]="ola_usuario_2.txt";
	FILE *arq;	
	
	arq = fopen (url,"w");
	fprintf(arq,"Nome: %s\n",argv[1]);
	fprintf(arq,"Idade: %s anos\n",argv[2]);
        
	fclose(arq);
	return 0;
}

