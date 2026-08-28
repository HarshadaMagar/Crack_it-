#include <stdio.h>
int main()
{
    int n;
    printf("enter how many nummbers you want");
    scanf("%d",&n);
    
    int k;
    printf("enter a numbers");
    scanf("%d",&k);
        
    
    int min=k;
    int max=k;
    
    for (int i=1;i<n;i++)
    {
       
        printf("enter a numbers");
        scanf("%d",&k);
        
        if(k<min)
        min=k;
        
        if(k>max)
        max=k;
        
    }
    printf("Min = %d\n", min);
    printf("Max = %d", max);


    return 0;
}
