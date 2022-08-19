#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv, char **env)
{ 
  size_t len;
  char * buff;
  int status;
  pid_t child;
  char * token;
  
  while (1)
    {
      buff = NULL;

      child = fork();

      if (child == 0)
      {
        write(STDOUT_FILENO, "CisFun$ ", 13);
        while (getline(&buff, &len, stdin) != -1)
          {
            token = strtok(buff, "\n");
              if (execve(token, argv, env) == -1)
                perror("./shell");
          }
      free(buff);
      return (0);
        }
      else
      {
        wait(&status);
      }
    }
    return 0;
}  
