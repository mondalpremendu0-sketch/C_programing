#include <stdio.h>

void printNum(int n,int i)
{
  if(n == 0) return;
  printf("%d ",i);
  printNum(n-1,i+1);
}
int main (){
  int n ;
  printf("Enter a number: ");
  scanf("%d",&n);
  printNum(n,1);
  
  return 0;
}