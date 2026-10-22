#include <stdio.h>

int main()
{
    int n = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    while (n != 1 && n != 4)
    {
        int sum = 0;

        while (n > 0)
        {
            int digit = n % 10;

            sum = sum + (digit * digit);

            n = n / 10;
        }

        n = sum;
    }

    if (n == 1)
    {
        printf("Happy Number");
    }
    else
    {
        printf("Not a Happy Number");
    }

    return 0;
}
