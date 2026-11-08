#include <stdio.h>

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// Function to multiply two numbers
int multiply(int a, int b)
{
    return a * b;
}

// Function to find maximum number
int findMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// Function that uses function pointer
int compute(int a, int b, int (*operation)(int, int))
{
    return operation(a, b);
}

int main()
{
    int num1, num2;
    int sum, product, maximum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calling compute with different functions
    sum = compute(num1, num2, add);

    product = compute(num1, num2, multiply);

    maximum = compute(num1, num2, findMax);

    printf("\nSum = %d", sum);
    printf("\nProduct = %d", product);
    printf("\nMaximum = %d", maximum);

    return 0;
}
