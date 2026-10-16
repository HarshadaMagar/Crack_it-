#include <stdio.h>

int main()
{
    int a, b, temp;
    int count = 0, sum = 0, largest;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    for (int i = b; i <= a; i++)
    {
        if (i % 4 == 1 && i % 6 == 1 && i % 5 != 0)
        {
            printf("%d ", i);

            count++;
            sum += i;
            largest = i;
        }
    }

    if (count > 0)
    {
        printf("\nCount = %d", count);
        printf("\nSum = %d", sum);
        printf("\nLargest = %d", largest);
    }
    else
    {
        printf("\nNo such number found.");
    }

    return 0;
}
