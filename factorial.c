// calculate the factorial of a number using loop 

#include <stdio.h>

int main()
{
    int num, i;
    long long int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("negative number is not possible.");
    }
    else
    {
        for(i = 1; i <= num; i++)
        {
            fact = fact * i;
        }

        printf("Factorial of %d = %lld", num, fact);
    }

    return 0;
}