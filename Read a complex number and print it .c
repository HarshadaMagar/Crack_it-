#include <stdio.h>
int main()
{
  float real,img;
printf("enter a real part:");
scanf("%f",&real);

printf("enter a imaginary part:");
scanf("%f",&img);

printf("complex number = %.2f + %.2fi",real,img);
return 0;
}
