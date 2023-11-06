#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//DO NOT CHANGE DATA STRUCTURE
struct Customer {
    char name[81];
    int transactions;
    int items_purchased;
    float amount_paid;
};

typedef struct Customer customer;

//DO NOT CHANGE FUNCTION PROTOTYPES
void menu();
void printCustomers(customer *, int);
int countCustomers(FILE*);
void readTransactions(FILE*, customer* ,int);
void heapify(customer*, int, int, int);
void heapSort(customer*, int,int);

//DO NOT CHANGE THE main FUNCTION
int main() {
    FILE *inFile;
    int no_of_customers = 0;
    customer *customers;

    inFile = fopen("transactions.txt", "r");
    if (inFile == NULL){
        printf("File could not be opened.\n");
        exit(1);
    }
    no_of_customers = countCustomers(inFile);
    printf("There are %d unique customers\n", no_of_customers);

    customers = (customer*) malloc(no_of_customers * sizeof (customer));
    fclose(inFile);
    inFile = fopen("transactions.txt", "r");
     if (inFile == NULL){
         printf("File could not be opened.\n");
         exit(1);
     }

    readTransactions(inFile, customers, no_of_customers);
    // if (customers == NULL) {
    //     printf("\nCustomers have NOT been read successfully!\n");
    //     exit(1);
    // }
    // printCustomers(customers, no_of_customers);

    // char command = 0;
    // int exit = 0;
    // while (exit != 1) {
    //     menu();
    //     printf("\nCommand: ");
    //     fflush(stdin);
    //     scanf("%c", &command);

    //     if (command == '1' || command == '2' || command == '3' || command == '4') {
    //         heapSort(customers, no_of_customers, command - '0');
    //         printCustomers(customers, no_of_customers);
    //     }
    //     else if (command == '5'){
    //         exit = 1;
    //         printf("Goodbye!\n");
    //     }
    //     else{
    //         printf("Please enter a valid command!\n");
    //     }
    // }
    // free(customers);
    return 0;
}

//DO NOT CHANGE THE menu FUNCTION
void menu () {
    printf("Please choose one of the following options:\n"
           "(1) Display customers sorted by number of transactions\n"
           "(2) Display customers sorted by number of items purchased\n"
           "(3) Display customers sorted by total amount paid\n"
           "(4) Display customers sorted by average amount paid per transaction\n"
           "(5) Exit\n");
}

//DO NOT CHANGE THE printCustomers FUNCTION

void printCustomers (customer* customers, int no_of_customers) {
    printf("List of customers:\n");
    int i;
    for (i = 0; i < no_of_customers; ++i) {
        printf("Name: %s, number of transactions = %d, number of items = %d, total amount paid = %.2f,"
               " average amount paid per transaction = %.2f\n",
               customers[i].name, customers[i].transactions, customers[i].items_purchased, customers[i].amount_paid,
               customers[i].amount_paid/customers[i].transactions);
    }
}

int countCustomers (FILE *inFile){
    //WRITE YOUR CODE HERE
    int NumberOfLines=0;
    char characters;
    while ((characters=fgetc(inFile))!=EOF) //reading the file character by character until the end of file
    {
        if(characters=='\n' ){ //counting the number of lines
            NumberOfLines++;
        }
    }
    return NumberOfLines;
}

void readTransactions (FILE* inFile, customer* customers, int no_of_customers) {

    //WRITE YOUR CODE HERE
    //need to creat the strucure of the customer?
    int i ;
    fscanf(inFile, "%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%s",customers[i].name, )

}

void heapify(customer* customers, int no_of_customers, int i, int criteria) {

    //WRITE YOUR CODE HERE
 
}

void heapSort(customer* customers, int no_of_customers, int criteria) {

    //WRITE YOUR CODE HERE

}