#include <stdio.h>
#include <stdlib.h>

int calculate(double x, double y, int z);
double result = 0;

int main(void)
{
    double a,b;
    int c;

    printf("SIMPLE CALCULATOR\n-----------------\n");
    printf(" 1. Additon\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Exit\n\n");

    // get inputs
    printf("Enter your choice: ");
    scanf("%i", &c);

    if (c >=1 && c <= 4)
    {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &a, &b);
    }

    // calculate
    calculate(a, b, c);

    // print output
    printf("Result: %.2f\n", result);
}

int calculate(double x, double y, int z)
{
    switch(z)
    {
        case 1:
            result = x + y;
            break;
        case 2:
            result = x - y;
            break;
        case 3:
            result = x * y;
            break;
        case 4:
            if(y != 0)
            {
                result = x / y;
            }
            else
            {
                printf("Error: Dividing by zero!\n");
                exit(0);
            }
            break;
        case 5:
            printf("Exiting...\n");
            exit(0);
            
        default:
            printf("Invalid choice! Please try again.\n");
    }

    return result;
}