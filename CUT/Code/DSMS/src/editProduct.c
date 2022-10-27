#include <header.h>

void updateProduct()
{
	char code[MAX], product[MAX];
	int available;
	ITEM item;
	FILE *file1, *file2;
	
	printf("\v\v\t\t\t\t\t\t\tUpdate Product\n");
	printf("\t\t\t\t\t\t**********\n");	
	printf("Enter the Product code to update the record:");
	scanf("%s", code);
	available = isCodeAvailable(code);
	if (available == 0)
	{
	        system("clear");
	        printf("\033[1;31m");
	        printf("\n\v\t\t\t\t\t\t* No Product is found for update.\n");
	        printf("\033[0m");
	}
	else
	{
        file1 = fopen("Record.txt", "rb");
        file2 = fopen("tempfile.txt", "wb");
        
        while (fread(&item, sizeof(item), 1, file1))
        {
			strcpy(product, item.product_code);
			if (strcmp(product, code) != 0)
			{
				fwrite(&item, sizeof(item), 1, file2);
			}
			else
			{
				printf("\n Updating data for the privious product %s\n", code);
				printf("enter Product Name: ");
                scanf("%s", item.product_name);
				printf("Enter Product Rate: ");
	            scanf("%d", &item.rate);
	            printf("Enter Quantity: ");
	            scanf("%d", &item.quantity);
	            printf("\n\n");
	            fwrite(&item, sizeof(item), 1, file2);
            }
        }
		fclose(file1);
        fclose(file2);
        file1 = fopen("Record.txt", "wb");
        file2 = fopen("tempfile.txt", "rb");
        while (fread(&item, sizeof(item), 1, file2))
        {
            fwrite(&item, sizeof(item), 1, file1);
        }
        fclose(file1);
        fclose(file2);
    }
} 
/*	end of update file. */
