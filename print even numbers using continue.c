#include <stdio.h>
int main()
{
    int n=0;
    printf("enter a number:-");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++)
    {
        if (i%2==1)
        continue;
        printf("from %d\t",n);
        printf("Even number is %d\n",i);
    }
}
