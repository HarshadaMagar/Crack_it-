#include <stdio.h>
int main()
{
    int n=0;
    printf("enter a number:-");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++)
    {
        if (i%2==0)
        continue;
        printf("From %d\t",n);
        printf("odd number is %d\n",i);
    }
}
