#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>
#include <direct.h>

int main()
{
    char input[1024];
    char *list[100];
    const char *clist[100];

    while (1)
    {

        printf("$: ");

        fgets(input, sizeof(input), stdin); // ask for input using fgets to get long character

        int len = strlen(input);               // when running without this we get a problem on running the string delimiter where at the end we got \n this trims the last \n
        if (len > 0 && input[len - 1] == '\n') // if the length of our input is more than 0 meaning something is there, AND if 2nd last thing is \n that we get when pressing enter (last is alwyas \0)
        {
            input[len - 1] = '\0'; // basically remove the \n and replace that with \0
        }

        if (strcmp(input, "exit") == 0) // check if input is exit, if so exit
        {
            break;
        }

        char *token = strtok(input, " "); // this is used to point where in my input there is space and return 0 if there is a space

        int i = 0;
        while (token != NULL) // check till no space and 0 is not returned anymore
        {
            // printf("%s \n", token);    // printing to see input chopped in different lines
            list[i] = token;
            clist[i] = token;
            i++;
            token = strtok(NULL, " "); // pointing to next space and returning value if there is one
        }
        list[i] = NULL;
        clist[i] = NULL;
        if (list[0] == NULL)
            continue;

        if (strcmp(list[0], "cd") == 0)
        {
            if (list[1] == NULL)
            {
                printf("Missing argument for cd \n");
            }
            else if (chdir(list[1]) != 0)
            {
                printf("No Directory Found!\n");
            }
            continue;
        }

        if (list[0] != 0)
        {
            _spawnvp(_P_WAIT, clist[0], (const char *const *)clist);
        }
    }
}