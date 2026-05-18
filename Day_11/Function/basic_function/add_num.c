#include <stdio.h>

int add (int x, int y){
  return x+y;
}

int main (){
  int a , b,sum;
  printf("Enter a number: ");
  scanf("%d %d",&a,&b);
  sum = add(a,b);
  printf("Sum of %d and %d = %d",a,b,sum);
  return 0;
}