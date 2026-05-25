#include <stdio.h>
//you take either 1 step or 2 step at a time.
int stairs(int n){
  if(n <= 2) return n;
  int totalNoOfWays = stairs(n-1) + stairs(n-2);
  return totalNoOfWays;
}

int main (){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  int stari = stairs(n);
  printf("%d ",stari);
  
  return 0;
}