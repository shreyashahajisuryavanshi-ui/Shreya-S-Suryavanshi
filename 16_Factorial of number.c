
#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;

    printf("Enter a number (0 to 20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
        printf("Invalid input");
    else
    {
        for (i = 1; i <= n; i++)
            fact = fact * i;

        printf("Factorial = %lld", fact);
    }

    return 0;
}
