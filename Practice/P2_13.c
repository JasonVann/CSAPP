//For CSAPP Practice Problems
#include <stdio.h>

//P2.13
int bis(int x, int m);
int bic(int x, int m);

// x|y
int bool_or(int x, int y){
  //int result = x | y;
  int result = bis(x, y);
  return result;
};

// x ^ y
int bool_xor(int x, int y){
  //int result = x ^ y;
  //int result = bis(bic(x,y), bis(x,y));
  int result = bis(bic(y,x), bic(x,y));
  return result;
}

int main(){
  int x = 99;
  int y = 101;
  int test_bool_or = bool_or(x, y);
  int test_bool_xor = bool_xor(x, y);

  printf("bool_or: %d\n", test_bool_or);
  printf("bool_xor: %d\n", test_bool_xor);

  printf("bis: %d\n", bis(x, y));
  printf("bic: %d\n", bic(x, y));
  return 0;
}

// Set x to 1 where m is 1
int bis(int x, int m){
  int z = x | m;
  return z;
}

// Clear x to 0 where m is 1
int bic(int x, int m){
  int z = m ^ (x | m);
  return z;
}
