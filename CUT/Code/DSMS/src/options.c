#include <header.h>

void options()
{
    int choice;
    
    printf("\v\n\v\t\t\t\t\t\t\t\t-- Departmental Store--\n");
    while (1)
    {
        printf("\n\t\t\t\t\t\t\t\t1. Insert\n\t\t\t\t\t\t\t\t2. Display");
        printf("\n\t\t\t\t\t\t\t\t3. Search\n\t\t\t\t\t\t\t\t4. Delete\n\t\t\t\t\t\t\t\t5. Edit_Poduct");
        printf("\n\t\t\t\t\t\t\t\t6. Sale Product\n\t\t\t\t\t\t\t\t7. Customer Sales Report \n\t\t\t\t\t\t\t\t8. Close\n\n");
        printf("\t\t\t\t\t\t\t\tEnter your choice: ");
	scanf("%d",&choice);        
	//choice = getChoice(num);
        switch (choice)
        {
        	case 1:
            	system("clear");
            	addProduct();
            	system("clear");
            	break;
        	case 2:
            	system("clear");
            	displayProduct();
            	break;
        	case 3:
            	system("clear");
            	searchProduct();
            	break;
        	case 4:
            	system("clear");
            	deleteProduct();
            	break;
        	case 5:
            	system("clear");
            	updateProduct();
            	break;
        	case 6:
            	system("clear");
	    		saleProduct();            
            	break;
			case 7:
	    		system("clear");
			addCustomer();
			viewCustomer();
	    		//customerSalesReport();
        	case 8:
            	system("clear");
            	closeApp();
            	break;
        	default:
            	system("clear");
            	printf("\033[1;31m");
            	printf("\t\t* Invalid choice.\n");
            	printf("\033[0m");
            	break;
        } /* end of switch */
    }

}
