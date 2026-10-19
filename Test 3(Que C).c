#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int distinct = 0;
    int maxCount = 0;
    int mostFreq;

    for(i = 0; i < n; i++)
    {
        int count = 0;
        int first = 1;

        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                first = 0;
                break;
            }
        }

        if(first)
        {
            distinct++;

            for(j = 0; j < n; j++)
            {
                if(a[i] == a[j])
                {
                    count++;
                }
            }

            printf("%d occurs %d times\n", a[i], count);

            if(count > maxCount)
            {
                maxCount = count;
                mostFreq = a[i];
            }
        }
    }

    printf("Number of distinct elements = %d\n", distinct);
    printf("Most frequent element = %d\n", mostFreq);

    return 0;
}
