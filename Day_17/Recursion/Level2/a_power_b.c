#include <stdio.h>

int Method_1(int a,int b){
  if(b == 1) return a;
  return a * Method_1(a,b-1);
}

int Method_2(int a,int b){
  if(b == 1) return a;
  return Method_2(a,b/2) * Method_2(a,b/2);
}


int main (){
  int base,expo;
  printf("Enter base: ");
  scanf("%d",&base);
  printf("Enter exponent: ");
  scanf("%d",&expo);
  printf("%d to the power %d is = %d\n",base,expo,Method_1(base,expo));
  printf("%d to the power %d is = %d\n",base,expo,Method_2(base,expo));
  return 0;
}