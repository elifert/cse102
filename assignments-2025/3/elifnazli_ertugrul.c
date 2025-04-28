#include <stdio.h>
#include <stdlib.h>

double get_balance();
void update_balance(double new_balance);
void check_balance();
void deposit_money(); 
void withdraw_money();
void menu();

int main() {
    char option;
    menu();
    printf("Choose an option: ");
    scanf("%d", &option);
    if (option == 1) {
        check_balance();
    }
    else if (option == 2) {
        deposit_money();
    }
    else if (option == 3) {
        withdraw_money();
    }
    else if (option == 4) {
        printf("Exiting the Virtual ATM.\n");
    }
    else {
        printf("Please enter a valid option.\n");
        return 1;
    }
    return 0;
}

double get_balance() {
    FILE *account;
    double balance;
    account = fopen("account.txt", "r");
    if (account == NULL) {
        balance = 100;
        account = fopen("account.txt", "w");
        if (account == NULL) {
            printf("Some error occured while creating the file.\nExiting the Virtual ATM.\n");
            return 2;
        }
        fprintf(account, "%lf", balance);
    }
    fscanf(account, "%lf", &balance);
    fclose(account);
    return balance;
    
}

void update_balance(double new_balance) {
    FILE *account;
    account = fopen("account.txt", "w");
    if (account == NULL) {
        printf("An error occured while creating the file.\n");
        return ;
    }
    fprintf(account, "%lf", new_balance);
    fclose(account);
    return ;
}

void check_balance() {
    double balance;
    balance = get_balance();
    printf("Current balance: %.2lf\n", balance);
}

void deposit_money() {
    double balance;
    double deposit;
    double new_balance;
    balance = get_balance();
    printf("Enter amount to deposit: ");
    scanf("%lf", &deposit);
    if (deposit < 0) {
        printf("Invalid amount. Please enter a positive amount to deposit.\n");
        return ;
    }
    new_balance = balance + deposit;
    update_balance(new_balance);
    printf("Deposit successful! New balance: %.2lf TRY (Saved account.txt)\n", new_balance);
}

void withdraw_money() {
    double balance;
    double withdraw;
    double new_balance;
    balance = get_balance();
    printf("Enter amount to withdraw: ");
    scanf("%lf", &withdraw);
    if (withdraw < 0) {
        printf("Invalid amount. Please enter a positive amount to withdraw.\n");
        return ;
    }
    new_balance = balance - withdraw;
    if (new_balance < 0) {
        printf("Insufficient funds! Your balance is only %.2lf TRY.\n", balance);
        return ;
    }
    update_balance(new_balance);
    printf("Withdraw successful! New balance: %.2lf TRY (Saved account.txt)\n", new_balance);
    return ;
}

void menu() {
    printf("----- Virtual ATM -----\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
}