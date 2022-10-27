CC = gcc

INC = ./inc
OBJ = ./obj
SRC = ./src
BIN = ./bin
LDFLAGS = -o
CFLAGS = -c -g -Wall
IFLAGS = -I $(INC)/

application: $(OBJ)/mainMenu.o $(OBJ)/addProduct.o $(OBJ)/bill.o $(OBJ)/checkRate.o $(OBJ)/close.o $(OBJ)/custSalesReport.o $(OBJ)/deleteProduct.o $(OBJ)/displayProduct.o $(OBJ)/DSMS.o $(OBJ)/editProduct.o $(OBJ)/isAvailable.o $(OBJ)/loginAdmin.o $(OBJ)/options.o $(OBJ)/searchProduct.o $(OBJ)/sellProduct.o $(OBJ)/viewCustomer.o
	$(CC) $(OBJ)/mainMenu.o $(OBJ)/addProduct.o $(OBJ)/bill.o $(OBJ)/checkRate.o $(OBJ)/close.o $(OBJ)/custSalesReport.o $(OBJ)/deleteProduct.o $(OBJ)/displayProduct.o $(OBJ)/DSMS.o $(OBJ)/editProduct.o $(OBJ)/isAvailable.o $(OBJ)/loginAdmin.o $(OBJ)/options.o $(OBJ)/searchProduct.o $(OBJ)/sellProduct.o $(OBJ)/viewCustomer.o -I $(INC)/ -o $(BIN)/application 

$(OBJ)/close.o: $(SRC)/close.c
	$(CC) $(CFLAGS) $(SRC)/close.c -I $(INC)/
	mv close.o $(OBJ)/
	
$(OBJ)/mainMenu.o: $(SRC)/mainMenu.c
	$(CC) $(CFLAGS) $(SRC)/mainMenu.c -I $(INC)/
	mv mainMenu.o $(OBJ)/
	
$(OBJ)/addProduct.o: $(SRC)/addProduct.c
	$(CC) $(CFLAGS) $(SRC)/addProduct.c -I $(INC)/
	mv addProduct.o $(OBJ)/
	
$(OBJ)/bill.o : $(SRC)/bill.c
	$(CC) $(CFLAGS) $(SRC)/bill.c -I $(INC)/
	mv bill.o $(OBJ)/
	
$(OBJ)/checkRate.o: $(SRC)/checkRate.c
	$(CC) $(CFLAGS) $(SRC)/checkRate.c -I $(INC)/
	mv checkRate.o $(OBJ)/
	
$(OBJ)/custSalesReport.o: $(SRC)/custSalesReport.c
	$(CC) $(CFLAGS) $(SRC)/custSalesReport.c -I $(INC)/
	mv custSalesReport.o $(OBJ)/
	
$(OBJ)/deleteProduct.o: $(SRC)/deleteProduct.c
	$(CC) $(CFLAGS) $(SRC)/deleteProduct.c -I $(INC)/
	mv deleteProduct.o $(OBJ)/
	
$(OBJ)/displayProduct.o: $(SRC)/displayProduct.c
	$(CC) $(CFLAGS) $(SRC)/displayProduct.c -I $(INC)/
	mv displayProduct.o $(OBJ)/
	
$(OBJ)/DSMS.o: $(SRC)/DSMS.c
	$(CC) $(CFLAGS) $(SRC)/DSMS.c -I $(INC)/
	mv DSMS.o $(OBJ)/
	
$(OBJ)/editProduct.o: $(SRC)/editProduct.c
	$(CC) $(CFLAGS) $(SRC)/editProduct.c -I $(INC)/
	mv editProduct.o $(OBJ)/
	
$(OBJ)/isAvailable.o: $(SRC)/isAvailable.c
	$(CC) $(CFLAGS) $(SRC)/isAvailable.c -I $(INC)/
	mv isAvailable.o $(OBJ)/
	
$(OBJ)/loginAdmin.o: $(SRC)/loginAdmin.c
	$(CC) $(CFLAGS) $(SRC)/loginAdmin.c -I $(INC)/
	mv loginAdmin.o $(OBJ)/
	
$(OBJ)/options.o: $(SRC)/options.c
	$(CC) $(CFLAGS) $(SRC)/options.c -I $(INC)/
	mv options.o $(OBJ)/
	
$(OBJ)/searchProduct.o: $(SRC)/searchProduct.c
	$(CC) $(CFLAGS) $(SRC)/searchProduct.c -I $(INC)/
	mv searchProduct.o $(OBJ)/
	
$(OBJ)/sellProduct.o : $(SRC)/sellProduct.c
	$(CC) $(CFLAGS) $(SRC)/sellProduct.c -I $(INC)/
	mv sellProduct.o $(OBJ)/
	
$(OBJ)/viewCustomer.o: $(SRC)/viewCustomer.c
	$(CC) $(CFLAGS) $(SRC)/viewCustomer.c -I $(INC)/
	mv viewCustomer.o $(OBJ)/
	
clean:
	rm -f a.out *.o
	rm -f $(BIN)/*
	rm -f $(OBJ)/*.o
	@echo "Cleaning Done!"

