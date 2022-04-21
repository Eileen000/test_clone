#include <stdio.h>
int main()
{
     int a,b;
     printf("please input a :\r\n");
     scanf("%d",&a);
     printf("please input b :\r\n");
     scanf("%d",&b);
     double c = (a + b) / 2;
     printf("the average of %d and %d is %.2f\r\n",a,b,c);
  
     return 0;
}
