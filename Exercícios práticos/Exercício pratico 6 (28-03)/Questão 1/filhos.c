#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t child_pid_1, child_pid_2, child_pid_3;
	
	printf ( " A ID do programa principal é %d\n", (int) getpid());
	child_pid_1 = fork (); // Cria o filho 1
	
	if(child_pid_1 == 0)
		printf ( " A ID do programa FIlho 1 é %d\n", (int) getpid());
	
	else
	{
		child_pid_2 = fork(); // Cria o filho 2
		if (child_pid_2 == 0)
					printf ( " A ID do programa FIlho 2 é %d\n", (int) getpid());	
		else
		{ 
		child_pid_3 = fork(); // Cria o filho 3
			if (child_pid_3 == 0)
			printf ( " A ID do programa FIlho 3 é %d\n", (int) getpid());
		}	
	}
return 0;
}
