#include <stdio.h>

// Function to calculate discount
float calculateDiscount(char membership, float amount)
{
    float rate, discount;

    if (membership == 'P' || membership == 'p')
    {
        rate = 20;
    }
    else if (membership == 'G' || membership == 'g')
    {
        rate = 10;
    }
    else
    {
        rate = 5;
    }

    // Extra 2% discount on shopping above 10000
    if (amount > 10000)
    {
        rate = rate + 2;
    }

    discount = amount * rate / 100;

    return discount;
}

// Function to calculate final bill
float calculateFinalBill(float discountedAmount)
{
    float tax, shipping, total;

    tax = discountedAmount * 15 / 100;

    if (discountedAmount <= 5000)
    {
        shipping = 300;
    }
    else
    {
        shipping = 0;
    }

    total = discountedAmount + tax + shipping;

    return total;
}

int main()
{
    char membership;
    float amount, discount, discountedAmount, finalBill;

    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &membership);

    printf("Enter shopping amount: ");
    scanf("%f", &amount);

    discount = calculateDiscount(membership, amount);

    discountedAmount = amount - discount;

    finalBill = calculateFinalBill(discountedAmount);

    printf("\nOriginal Amount: %.2f", amount);
    printf("\nDiscount: %.2f", discount);
    printf("\nDiscounted Amount: %.2f", discountedAmount);
    printf("\nFinal Bill: %.2f", finalBill);

    return 0;
}
