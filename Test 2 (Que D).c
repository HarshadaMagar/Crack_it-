#include <stdio.h>

int main()
{
    int nums[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(int i = 1; i < n; i++)
    {
        nums[i] = nums[i] + nums[i - 1];
    }

    printf("Running Sum Array:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}
