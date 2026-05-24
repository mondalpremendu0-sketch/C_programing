#include <stdio.h>

int result(int a,int b){
  if(b == 1) return a;
  return a * result(a,b-1);
}

int main (){
  int base,expo;
  printf("Enter base: ");
  scanf("%d",&base);
  printf("Enter exponent: ");
  scanf("%d",&expo);
  printf("%d to the power %d is = %d\n",base,expo,result(base,expo));
  return 0;
}