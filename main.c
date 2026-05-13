#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[1024];
    while (1)
    {
        printf("$: ");                      // constant input symbol
        fgets(input, sizeof(input), stdin); // ask for input using fgets to get long character

        if (strcmp(input, "exit\n") == 0) // check if input is exit, if so exit
        {
            break;
        }

        char *token = strtok(input, " ");

        while (token != NULL)
        {
            printf("%s \n", token);
            token = strtok(NULL, " ");
        }
    }
}