// PS2.27
#include <stdio.h>
#include <math.h>

int uadd_ok(unsigned x, unsigned y);

int main()
{
  unsigned int x = 2147483648*2 -1;

  unsigned int y = 999;
  int test = uadd_ok(x ,y);
  printf("%u + %u returns %d\n", x, y, test);
  return 0;
}

int uadd_ok(unsigned x, unsigned y)
{
  unsigned z = x + y;
  printf("sum is %u\n", z);
  if (z < x)
    return 0;
  else
    return 1;
  
}


  
