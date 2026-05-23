#include <stdio.h>

void dec_inc(int n)
{
  if(n == 0) return;
  printf("%d ",n);
  dec_inc(n-1);
  printf(" %d ",n);
}
int main (){
  int n ;
  printf("Enter a number: ");
  scanf("%d",&n);
  dec_inc(n);
  
  return 0;
}