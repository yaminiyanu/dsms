#include <header.h>

/*	read customer details */
	
void viewCustomer()
{
	int count = 0;
	CUST Cust;
	FILE *file;
    file = fopen("custRecord.txt", "rb");
    
    printf("\v\v\t\t\t\t\t\t\tCustomer Details\n");
    if (file == NULL)
    {
        printf("\t\t\t\tNo Customer is inserted.");
        options();
    }
    printf("\t\t\t------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\tNAME\t\t||\tAge\t||\tMobile Number\t||\tZoneCode\n");
    printf("\t\t\t------------------------------------------------------------------------------------------------------\n");
    
    while (fread(&Cust, sizeof(Cust), 1, file))
    {
        printf("\t\t\t%s\t||\t%d\t||\t%s\t||\t%ld\n", Cust.name, Cust.age, Cust.mob, Cust.zoneCode );
        count++;
    }
    printf("\t\t\t------------------------------------------------------------------------------------------------------\n");
    if (count == 0)
    {
        system("clear");
        printf("\033[1;31m");
        printf("\n\v\t\t\t\t\t\t* Customer is not available.\n");
        printf("\033[0m");
    }
    fclose(file);
	options();
} 
