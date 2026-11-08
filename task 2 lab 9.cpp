#include <stdio.h>

// Function to withdraw money
void withdraw(float *balance, float amount)
{
    if (amount <= *balance)
    {
        *balance = *balance - amount;

        printf("\nTransaction Successful!");
        printf("\nRemaining Balance: %.2f", *balance);
    }
    else
    {
        printf("\nTransaction Declined: Insufficient Balance");
    }
}

// Function to deposit money
void deposit(float *balance, float amount)
{
    *balance = *balance + amount;

    printf("\nDeposit Successful!");
    printf("\nUpdated Balance: %.2f", *balance);
}

int main()
{
    float balance = 10000;
    float amount;
    int choice;

    printf("Welcome to ATM\n");

    printf("Current Balance: %.2f\n", balance);

    printf("\n1. Withdraw");
    printf("\n2. Deposit");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("\nInvalid Amount!");
    }
    else if (choice == 1)
    {
        withdraw(&balance, amount);
    }
    else if (choice == 2)
    {
        deposit(&balance, amount);
    }
    else
    {
        printf("\nInvalid Choice!");
    }

    printf("\n\nFinal Account Balance: %.2f", balance);

    return 0;
}
