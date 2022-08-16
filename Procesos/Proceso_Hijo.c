#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
        pid_t id_proceso_padre;
	pid_t id_proceso_hijo;
        puts("\n ==ESTE PROGRAMA MUESTRA EL IDENTIICADOR DE UN PROCESO PADRE E HIJO==\n);

        id_proceso_padre = getppid();
	id_proceso_hijo = getpid();

        printf("Identificador del proceso padre: %d e hijo:%d \n",id_proceso_padre,id_proceso hijo);

        return 0;
}
