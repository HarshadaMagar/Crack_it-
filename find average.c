#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    float average;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);

        sum = sum + num;
    }

    average = sum / 10.0;

    if (average > 50)
    {
        average = average / 2;
    }

    printf("Final average = %.2f\n", average);

    return 0;
}
