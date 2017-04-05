#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char*argv[])
{
	char cpy[20];
	int fp;	
	
	strcpy(cpy,argv[1]); // Copia o conteúdo de uma string na outra
	strcat(cpy,".txt"); // Concatena a string com para criar um arquivo txt
	
	
	fp=open(cpy,O_RDWR | O_CREAT);
	
	write(fp,"Nome: ",6);
	write(fp,argv[1],strlen(argv[1]));
	write(fp,"\n",2);
	write(fp,"Idade: ",7);
	write(fp,argv[2],strlen(argv[2]));
	write(fp," anos\n",7);	
	close(fp);
	
        
	close(fp);
	return 0;
}

