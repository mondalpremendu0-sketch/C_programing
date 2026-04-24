#include <stdio.h>
int main (){
  int n ;
  printf("Enter a number: ");
  scanf("%d",&n);
  if(n > 99 && n < 999){
    printf("%d this is an three digit number\n",n);
  }else{
    printf("%d Not a three digit num\n",n);
  }
  return 0;
}