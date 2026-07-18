#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90)
    {
        printf("Grade: A+");
    }
    else if (percentage >= 80)
    {
        printf("Grade: A");
    }
    else if (percentage >= 70)
    {
        printf("Grade: B");
    }
    else if (percentage >= 60)
    {
        printf("Grade: C");
    }
    else if (percentage >= 50)
    {
        printf("Grade: D");
    }
    else
    {
        printf("Grade: F (Fail)");
    }

    return 0;
}