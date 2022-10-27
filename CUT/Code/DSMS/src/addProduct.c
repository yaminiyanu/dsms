#include <header.h>

int addProduct()
{
	char code[MAX];
    int temp;
    ITEM item;
    FILE *file;
    printf("\v\v\t\t\t\t\t\t\tAdd Product\n");
    printf("\t\t\t\t\t\t**********\n");
    printf("\n\t\t\t\t\tEnter the \" end \" to exit for here");
    printf("\n\t\t\t\t\tEnter Product code: ");
    scanf("%s", code);
    file = fopen("Record.txt", "ab");
    if (strcmp(code, "end") == 0)
    {
        system("clear");
        options();
    }
    int available;
    available = isCodeAvailable(code); /* return 1 if code id found and return 0 if the code is not available. */
    if (available == 1)
    {
        system("clear");
        printf("\033[1;31m");
        printf("\n\v\t\t\t\t\t\t* Product is already there.\n");
        printf("\033[0m");
        options();
    }
    strcpy(item.product_code, code); /* copy the code to the structure item	*/
    printf("\t\t\t\t\tEnter Product Name: ");
    scanf("%s", item.product_name);
    printf("\n\t\t\t\t\tEnter Product Rate: ");
    temp = checkRate();
    item.rate = temp;
    printf("\n\t\t\t\t\tEnter Quantity: ");
    scanf("%d", &item.quantity);
    fwrite(&item, sizeof(item), 1, file);/*	 writing structure to a file	*/
    fclose(file);
	return 0;

}
 /* End of addproduct function	*/
