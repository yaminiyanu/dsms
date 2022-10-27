#include <header.h>

/*	mainMenu function start	*/

void mainMenu()
{
	int choice;
	
	system("clear");
	printf("\n\t\t####################WELCOME TO DEPARTMEANTAL STORE MANAGEMENT SYSTEM###############");
	printf("\n\t\t\t\tPress\t0\tfor exit\n");
	printf("\n\t\t\t\tPress\t1\t Admin Login\n\t\t\t\tchoice :");
	scanf("%d", &choice);
	if(choice==0)
	{
		system("clear");
		closeApp();
	}
	switch(choice)
	{
		case 1:
			system("clear");
			login();
			break;
		default:
			system("clear");
			printf("\nchoose valid Input..");
			system("clear");
			mainMenu();
			break;
	}
}
	/*	END OF MAINMENU FUNCTION	*/
