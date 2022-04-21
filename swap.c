#include <stdio.h>
int main()
{
      int a,b;
      a = 3;
      b = 4;
      int temp = a;
      a = b;
      b = temp;
      printf("a=%d,b=%d\r\n",a,b);
  
      return 0;
}
