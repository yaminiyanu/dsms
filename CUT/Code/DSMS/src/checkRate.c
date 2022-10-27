#include <header.h>

int checkRate()

{
    char choice;
    int input;
    while (scanf("%d", &input) != 1)
    {
        while ((choice = getchar()) != '\n')
        {
        }
        printf("\033[1;31m");
        printf("\n\v\t\t\t\t\t\tRate be positive Integer.\n");
        printf("\033[0m");
        printf("\t\t\t\t\tEnter rate of the product in positive integer: ");
    }

    return input;
}

