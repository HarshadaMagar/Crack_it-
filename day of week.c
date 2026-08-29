#include <stdio.h>

int main() {
    int n=0;
    printf("enter a number to see a day of week in (1 to 7): ");
    scanf("%d",&n);
    if(n==1)
      printf("Sunday");
    else if(n==2)
      printf("Monday");
    else if(n==3)
      printf("Tuesday");
    else if(n==4)
      printf("Wednesday");
    else if(n==5)
      printf("Thursday");
    else if(n==6)
      printf("friday");
    else if(n==7)
      printf("saturday");
    else 
      printf("invalid input ");
    
     return 0;
}
