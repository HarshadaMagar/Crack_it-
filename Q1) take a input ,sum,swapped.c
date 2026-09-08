#include <stdio.h>
int main()
{
  int n,d1,d2,d3,d4;
  int sum,swapped;
  printf("enter a four digit numbers");
  scanf("%d",&n);
  
  d1=n/1000;
  d2=(n/100)%10;
  d3=(n/10)%10;
  d4=n%10;
  
  sum=d1+d2+d3+d4;
  swapped=d4*1000+d2*100+d3*10+d1;
  printf("Digits: %d %d %d %d \n",d1,d2,d3,d4);
  printf("sum:%d\n",sum);
  printf("swapped:%d\n",swapped);
  
  return 0;
}

