#include <stdio.h>

int Fibonacci(int n){
  if(n <= 2) return 1;
  return Fibonacci(n-1) + Fibonacci(n-2);
}

int main (){
  int x;
  printf("Enter a number: ");
  scanf("%d",&x);
  printf("%d fibbonacci term is = %d\n",x,Fibonacci(x));
  return 0;
}