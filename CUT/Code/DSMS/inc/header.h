#ifndef	HEADER_H
#define	HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define USERNAME "group"
#define PASSWORD "group02"
#define MAX 20

typedef struct items
{
   	int rate;
	int quantity;
	char product_code[MAX];
	char product_name[MAX];

} ITEM;

typedef struct cust
{
	int age;
	char name[30];
	char mob[10];
	long zoneCode;
}CUST;

typedef struct sale
{
	char productCode[MAX];
	int unit;
}SALE;


int isCodeAvailable(char[]);
int isProductAvailable(int);
int getChoice(int);
int checkRate();
int addProduct();
void displayProduct();
void closeApp();
void searchProduct();
void deleteProduct();
void updateProduct();
void login();
int addCustomer();
void viewCustomer();
void mainMenu();
ITEM saleProduct();
void dbill();
void options();
void customerSalesReport();
int viewSales();

#endif
