#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	char nome[20];
	char cpy [20];	
	int idade,fp;
	
	
	printf("Digite o seu nome: ");
	scanf("%s",nome);
	

	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	
	strcpy(cpy,nome); // Copia o conteúdo de uma string na outra
	strcat(cpy,".txt"); // Concatena a string com para criar um arquivo txt
	
	fp=open("/home/rodrigo/Desktop/SIstemas-Embarcados/Exercícios práticos/Exercício prático 5 23-03/Questão 2/cpy.txt",O_RDWR | O_CREAT);
	
	write(fp,&nome,20);
	write(fp,&idade,sizeof(int));	
	close(fp);
	
	return 0;
}
