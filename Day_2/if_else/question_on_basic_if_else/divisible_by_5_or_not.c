#include <stdio.h>
int main (){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  if(n%5 == 0){
  printf("Divisible By 5\n");
  }else{
  printf("Not Divisible By 5\n");
  }
  return 0;
}