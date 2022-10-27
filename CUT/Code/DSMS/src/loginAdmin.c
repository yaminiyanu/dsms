#include <header.h>

void login()
{
	char username[15], password[10];
	
    printf("\v\v\t\t\t\t\t\t\tLogin \n");
    printf("\t\t\t\t\t\t**********\n");    
    printf("\v\v\t\t\tEnter username: ");
    scanf("%s", username);
    printf("\t\t\tEnter password: ");
    scanf("%s", password);
    while (1)
    {
        if ((strcmp(USERNAME, username)) == 0 && (strcmp(PASSWORD, password)) == 0)
        {
            system("clear");
            printf("\033[1;32m");
            printf("\t\t\t\t\tLogin successfully!!");
            printf("\033[0m");
            /*	printf("\v\v\t\t\t--Welcome to the Departmental Store--\n");	*/
            options();
        }
        else
        {
            system("clear");
            printf("\033[1;31m");
            printf("\n\t\t\tsorry you enter the worng information.\n");
            printf("\n\t\t\tPlease try again.\n");
            printf("\033[0m");
            login();
            break;
        }
    }
}
