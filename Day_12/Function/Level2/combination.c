#include <stdio.h>
int factorial(int n){
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}
int main(){
  int n = 5,r = 2;
  int nCr = factorial(n)/(factorial(r)*factorial(n-r));
  printf("%d ",nCr);
  return 0;
}