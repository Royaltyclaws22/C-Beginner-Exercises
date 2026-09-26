#include <stdio.h>

// Declare the function prototypes
int read_values_from_keyboard(float *, float *);
float compute_addition(float, float);
float compute_subtraction(float, float);
float compute_multiplication(float, float);
float compute_division(float, float);

int main(void)
{
    float result, x, y;
    char operation;

    // Display the program title
    printf("\n=====================================");
    printf("\n          Simple Calculator");
    printf("\n=====================================\n");

    // Read the input values
    if (!read_values_from_keyboard(&x, &y))
    {
        printf("\nError: Invalid numeric input.\n");
        return 0;
    }

    // Prompt the user to select an arithmetic operation
    printf("\nSelect an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Perform the selected arithmetic operation
    switch (operation)
    {
    case '+':
        result = compute_addition(x, y);
        printf("\nResult (Addition): %.3f\n", result);
        break;

    case '-':
        result = compute_subtraction(x, y);
        printf("\nResult (Subtraction): %.3f\n", result);
        break;

    case '*':
        result = compute_multiplication(x, y);
        printf("\nResult (Multiplication): %.3f\n", result);
        break;

    case '/':
        if (y == 0)
        {
            printf("\nError: Division by zero is not allowed.\n");
        }
        else
        {
            result = compute_division(x, y);
            printf("\nResult (Division): %.3f\n", result);
        }
        break;
        
    default:
        printf("\nError: Invalid operation selected.\n");
        break;
    }

    return 0;
}

// Read two floating-point values from the keyboard
int read_values_from_keyboard(float *x, float *y)
{
    printf("\nEnter the first number: ");

    if (scanf("%f", x) != 1)
    {
        return 0;
    }

    printf("Enter the second number: ");

    if (scanf("%f", y) != 1)
    {
        return 0;
    }

    return 1;
}

// Return the sum of two numbers
float compute_addition(float x, float y)
{
    float result;

    // Calculate the sum
    result = x + y;

    return result;
}

// Return the difference between two numbers
float compute_subtraction(float x, float y)
{
    float result;

    // Calculate the difference
    result = x - y;

    return result;
}

// Return the product of two numbers
float compute_multiplication(float x, float y)
{
    float result;

    // Calculate the product
    result = x * y;

    return result;
}

// Return the quotient of two numbers
float compute_division(float x, float y)
{
    float result;

    // Calculate the quotient
    result = x / y;

    return result;
}
