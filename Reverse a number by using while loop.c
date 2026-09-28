#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int rev = 0;

    while (n > 0)
    {
        int temp = n % 10;
        rev = (rev * 10) + temp;
        n = n / 10;
    }

    printf("Reverse = %d", rev);

    return 0;
}
