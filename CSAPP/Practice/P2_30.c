// PS2-30
#include <stdio.h>

int tadd_ok(int x, int y)
{
  int sum = x + y;
  printf("unsigned sum is %u\n", sum);
  printf("signed sum is %d\n", sum);

  for (int i = 3; i < 5; i++)
      sum += 1;
  
  if (x > 0 && y > 0 && sum < 0)
    return 0;
  else if(x < 0 && y < 0 && sum > 0)
    return 0;
  else
    return 1;
}

int main()
{
    int *p;
    //*p = 5;

    int arr[] = {1,2};
    int *p2;
    p2 = &arr[0];

    //printf("%p %d\n", &p, *p);
    printf("A[0] is %d %p %d\n", arr[0], p2, *p2);
        
    
  int x = 1073741824*2 + 10;
  printf("%d is x\n", x);
  int t = tadd_ok(1073741824*2 - 1,-10);
  printf("%u \n", t);
  return 0;
}
