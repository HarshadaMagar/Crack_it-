#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n], E[n], O[n];
    int eCount = 0, oCount = 0;
    int eSum = 0, oSum = 0;

    printf("Enter %d integers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] % 2 == 0)
        {
            E[eCount] = a[i];
            eCount++;
            eSum += a[i];
        }
        else
        {
            O[oCount] = a[i];
            oCount++;
            oSum += a[i];
        }
    }

    printf("\nEven Array: ");
    for(i = 0; i < eCount; i++)
    {
        printf("%d ", E[i]);
    }

    printf("\nSize = %d", eCount);
    printf("\nSum = %d\n", eSum);

    printf("\nOdd Array: ");
    for(i = 0; i < oCount; i++)
    {
        printf("%d ", O[i]);
    }

    printf("\nSize = %d", oCount);
    printf("\nSum = %d\n", oSum);

    if(eSum > oSum)
    {
        printf("\nEven sum is larger by %d", eSum - oSum);
    }
    else if(oSum > eSum)
    {
        printf("\nOdd sum is larger by %d", oSum - eSum);
    }
    else
    {
        printf("\nBoth sums are equal");
    }

    return 0;
}
