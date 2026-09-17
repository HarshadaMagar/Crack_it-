#include <stdio.h>
int main()
{
    int i=0;
    for(i=0;i<10;i++)
    {
        int i1=0;
        printf("Enter the i1 value \n");
        scanf("%d",&i1);
        int i1_square=i1*i1;
        printf("i1_square=%d\n",i1_square);
    }
    return 0;
    
}
