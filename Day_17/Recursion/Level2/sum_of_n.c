#include <stdio.h>

int sum(int n){
  if(n == 1) return 1;
  return n + sum(n-1);
}

int main (){
  int x;
  printf("Enter a number: ");
  scanf("%d",&x);
  printf("%d th term sum is = %d\n",x,sum(x));
  return 0;
}