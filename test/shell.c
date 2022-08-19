#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	char * a[] = {"/bin/ls", "-l", "/usr", NULL};
	char * gl, c, buff;
	size_t len;

	gl = getline(&buff, &len, stdin);

	while (gl != -1)
	{
		printf("Cisfun# ");
		buff = NULL;
		return (0);
	}

	return (0);
}
