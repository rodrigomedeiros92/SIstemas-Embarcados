#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	char nome[20];
	char cpy [20];
	char str [20];		
	int fp,idade;
	
	
	printf("Digite o seu nome: ");
	scanf("%s",nome);
	

	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	
	strcpy(cpy,nome); // Copia o conteúdo de uma string na outra
	strcat(cpy,".txt"); // Concatena a string com para criar um arquivo txt]
	
	sprintf(str,"%d",idade);
	
	fp=open(cpy,O_RDWR | O_CREAT);
	
	write(fp,"Nome: ",6);
	write(fp,nome,strlen(nome));
	write(fp,"\n",2);
	write(fp,"Idade: ",7);
	write(fp,str,strlen(str));
	write(fp," anos\n",7);	
	close(fp);
	
	return 0;
}
