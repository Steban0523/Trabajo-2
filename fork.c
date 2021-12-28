#include <stddef.h>
#include <sys/types.h>

int main(int argc, char* argv[]) {
	pid_t pid;
	printf("[%d] Primera instruccion\n",getpid());
	pid = fork();
	if (pid < 0) {
		printf("Error en la creacion del proceso\n");
		exit(1); // return 1;
	} else if (pid > 0) { 
		wait(NULL);
	}
	printf("[%d] Segunda instruccion\n",getpid());
	return 0;
}
