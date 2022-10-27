#include <header.h>

void displayProduct()
{
	
	int count = 0;
	ITEM item;
	FILE *file;
	file = fopen("Record.txt", "rb");
    
	printf("\v\v\t\t\t\t\t\t\tAvailable Products\n");
    printf("\t\t\t------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\tCODE\t||\tNAME\t||\tRATE\t||\tQUANTITY\t\n");
    printf("\t\t\t------------------------------------------------------------------------------------------------------\n");
    if (file == NULL)
    {
        printf("\t\t\t\tNo Product is inserted.");
        options();
    }
    while (fread(&item, sizeof(item), 1, file))
    {
        printf("\t\t\t%s\t||\t%s\t||\t%d\t||\t %d\t\n", item.product_code, item.product_name, item.rate, item.quantity);
        count++;
    }
    printf("\t\t\t------------------------------------------------------------------------------------------------------\n");
    if (count == 0)
    {
        system("clear");
        printf("\033[1;31m");
        printf("\n\v\t\t\t\t\t\t* Product is not available.\n");
        printf("\033[0m");
    }
    fclose(file);
} /* End of display functions	*/
