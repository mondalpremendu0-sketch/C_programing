#include <stdio.h>

void printNum_method1(int n,int i)
{
  if(n == 0) return;
  printf("%d ",i);
  printNum_method1(n-1,i+1);
}

void printNum_method2(int n)
{
  if(n == 0) return;
  printNum_method2(n-1);
  printf("%d ",n);
}


int main (){
  int n ;
  printf("Enter a number: ");
  scanf("%d",&n);
  printNum_method1(n,1);
  printf("\n");
  printNum_method2(n);
  return 0;
}