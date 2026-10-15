#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
        a[i] = sum;
    }

    printf("Running Sum Array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
