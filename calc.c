#include <stdio.h>
#include <stdlib.h>

bool is_valid(char c)
{
    char valid_opers[] = "+-*/"; 

    // Check if given char is in list of valid
    for (int i = 0; valid_opers[i] != '\0'; i++)
    {
        if (c == valid_opers[i])
        {
            return true;
        }
    }
    return false;
}

double sum(double n1, double n2)
{
    return n1 + n2;
}

double subtract(double n1, double n2)
{
    return n1 - n2;
}

double multiply(double n1, double n2)
{
    return n1 * n2;
}

double  divide(double n1, double n2)
{
    return n1 / n2;
}

int main()
{
    char oper;
    double num1, num2;

    printf("Welcome!");
    printf("Choose an operator [-|+|/|*]: ");

    scanf("%c", &oper);

    if (!is_valid(oper))
    {
        printf("Invalid operation\n");
        exit(-1);
    }

    printf("Write the first number: ");
    scanf("%lf", &num1);

    printf("Write the second number: ");
    scanf("%lf", &num2);

    switch (oper)
    {
        case '+':
            printf("%lf\n", sum(num1, num2));
            break;

        case '-':
            printf("%lf\n", subtract(num1, num2));
            break;

        case '*':
            printf("%lf\n", multiply(num1, num2));
            break;

        case '/':
            printf("%lf\n", divide(num1, num2));
            break;
    }
    return 0;
}
