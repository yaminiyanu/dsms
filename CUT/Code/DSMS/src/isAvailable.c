#include <header.h>

/* 	function to check if the given product code is available	*/

int isCodeAvailable(char code[])
{
    FILE *file;
    ITEM item;
    file = fopen("Record.txt", "rb");
    
    while (!feof(file))
    {
        fread(&item, sizeof(item), 1, file);
        if (strcmp(code, item.product_code) == 0)
        {
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    return 0;
}

/*	Function to check the quentity during the sale product.	*/

int isProductAvailable(int quantity)
{
    FILE *file;
    ITEM item;
    file = fopen("Record.txt", "rb");
    while (!feof(file))
    {
        fread(&item, sizeof(item), 1, file);
        if (item.quantity >= quantity)
        {
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    return 0;
}

/* function to check the choice is integer or not  */

int getChoice(int input)
{
    char ch;
    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
        }
        printf("\033[1;31m");
        printf("\n\v\t\t\t\t\t\tMust be positive integer.\n");
        printf("\033[0m");
        printf("\t\t\t\t\tEnter Positive integer value, such as 1,2,3,4: ");
    }

    return input;
}
