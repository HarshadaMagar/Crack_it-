#include <stdio.h>
int main()
{
    int arr[5],i;
    int sum=0;
    printf("enter a array element :");
   
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum of all array element :%d\n",sum);
    return 0;
}
