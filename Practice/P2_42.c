#include <stdio.h>
int div16(int x)
{
  int bias = (1<<4) - 1;
  int sign = (unsigned)x >> 31;
  // Or:
  // bias = bias & 0xf;
  printf("%d\n", sign);
  printf("bias is %d\n", bias);
  printf("temp is %d\n", x + bias);
  return (x + bias) >> 4;
}

int main()
{
  int x = -31;
  int res = div16(x);
  printf("res is %d\n", res);
}
