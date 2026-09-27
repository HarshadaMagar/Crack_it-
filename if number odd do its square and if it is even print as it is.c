#include <stdio.h>
int main()
{
    int n=0;
    printf("Enter n numbers ");
    scanf("%d",&n);
    
    for (int i=1;i<n;i++)
    {
        if(i%2==1)
        printf("Odd number => %d sqaure => %d\n",i,i*i);
        
        else
        printf("Even no is => %d\n",i);
    }
    return 0;
}
