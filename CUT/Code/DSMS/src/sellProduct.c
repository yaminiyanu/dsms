#include <header.h>

ITEM saleProduct()
{
	char prod_code[4] = {0};
	char name[30];
    int quantity = 0, size = 0, count = 1;
    int total = 0, gtotal = 0;
    int availableC, qty;
    SALE sale;
    ITEM item;
    FILE *file;
    
    printf("\v\v\t\t\t\t\t\t\tSale Product\n");    
    printf("\t\t\t\t\tEnter  \" end \" to finish input");
    file = fopen("Record.txt", "r+b");
    rewind(file);
    qty = item.quantity;
    while (1)
    {
        printf("                    ");
        printf("                    ");
        printf("\n\v\t\t\t\tEnter Item Code:");
        scanf("%s", prod_code);
        if (strcmp(prod_code, "end") == 0)
        {
            system("clear");
            break;
        }
        availableC = isCodeAvailable(prod_code);
        if (availableC == 0)
        {
            system("clear");
            printf("\033[1;31m");
            printf("\n\v\t\t\t\t\t\t* no Product is found.\n");
            printf("\033[0m");
            options();
        }

        printf("\t\t\t\tEnter Quantity:");
        scanf("%d", &quantity);
        qty = qty - quantity;
        if (qty < 0)
        {
/*
            system("clear");
            printf("\033[1;31m");
            system("clear");
            printf("\n\t\t\t\t\t\t* Out of stock.\n");
            printf("\033[0m");
*/
			saleProduct();
            break;
        }
	rewind(file);
        while (fread(&item, sizeof(item), 1, file))
        {
            if ((strcmp(item.product_code, prod_code) == 0))
            {
                total = item.rate * quantity;
                printf("\n\t\t\t%d ", count);
                printf("\t\t\t%s ", item.product_name);
                printf("\t\t\t%d ", quantity);
                printf("\t\t\t%d ", item.rate);
                printf("\t\t\t%d ", total);
                gtotal = gtotal + total;
                size = sizeof(item);
                item.quantity = item.quantity - quantity;
                count++;
                fseek(file, -size, SEEK_CUR);
                fwrite(&item, sizeof(item), 1, file);
                break;
            }
        }
	}
    if (gtotal != 0)
    {
        printf("\n\v\t\t\t\t\t\tTOTAL AMOUNT = Rs. %d", gtotal);
    }
    fclose(file);
    return item;
}
