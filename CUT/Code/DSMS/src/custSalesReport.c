#include <header.h>
	
void customerSalesReport()
{
	char name[20];
	int count = 0;
	ITEM item;
	SALE sale;
	FILE *file;
	
	printf("\nEnter Customer Name: ");
	scanf("%s", name);
	file = fopen("name", "rb");
	printf("\v\v\t\t\t\t\t\t\tCustomer Sales Report\n");
	printf("\t\t\t\t\t\t****************\n");
    printf("\t\t\t--------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\tNAME :\t||\t%s\n", name);
	printf("\t\t\t--------------------------------------------------------------------------------------------\n");
	printf("\n\t\t\t--------------------------------------------------------------------------------------------\n");
	printf("\t\t\tCODE\t||\tNAME\t||\tRATE\t||\tQUANTITY\t\n");
	printf("\t\t\t--------------------------------------------------------------------------------------------\n");
	if (file == NULL)
	{
		printf("\t\t\t\tNo Product is purchase.");
		options();
	}
	while (fread(&item, sizeof(item), 1, file))
	{
		printf("\t\t\t%s\t||\t%s\t||\t%d\t||\t %d\t \n", sale.productCode, item.product_name, item.rate, sale.unit);
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
}

/*
################################Add Customer Details###############################
*/

int addCustomer()
{
	FILE *fp;
	ITEM item;
	CUST Cust;
	fp=fopen("custRecord.txt", "ab");
	if(fp==NULL)
	{
		printf("File does not exist\n");
		exit(1);
	}
	else
	{
		printf("\n\t\t###############Enter Customer Details#################\n");
		printf("\nEnter Name :");
		scanf("%s", Cust.name);
		printf("\nEnter age :");
		scanf("%d", &Cust.age);
		printf("\nEnter Moblie Number :");
		scanf("%s", Cust.mob);
		printf("\nEnter ZoneCode :");
		scanf("%ld",&Cust.zoneCode);		
	}
	fwrite(&Cust, sizeof(Cust), 1, fp);
	printf("\033[1;31m");
	system("clear");	
	printf("\nYou Details saved successfully!");
	printf("\033[0m");
	fclose(fp);
	return 0;	
}
/* End of addCust function */
