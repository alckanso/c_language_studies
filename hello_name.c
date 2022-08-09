/* This program is a variation of hello.c, including a scanf function to get variable name from input.
The %s is used in scanf and printf functions because this variable is defined as string.
The variable is declared with 10 characters lenght, causing the problem to get an error, with name input more than 10 chars. */

#include <stdio.h>

main()
{
        char name[10];
        printf("Type your name:\n");
        scanf("%s", name);
        printf("Hello, %s\n", name);
}
