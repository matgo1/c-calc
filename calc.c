#include <stdio.h>
#include <stdlib.h>

bool is_valid(char c)
{
    char valid_opers[] = "+-*/";

    for (int i = 0; valid_opers[i] != '\0'; i++)
    {
        if (c == valid_opers[i])
        {
            return true;
        }
    }
    return false;
}


int main()
{
    char oper;
    double num1, num2;

    printf("Welcome!");
    printf("Choose an operator [-|+|/|*]");

    scanf("%c", &oper);

    if (!is_valid(oper))
    {
        printf("Invalid operation\n");
        exit(-1);
    }
    return 0;
}
