#include <stdio.h>

void Pre_In_Post(int n){
  if(n == 0) return;
  printf("Pre: %d\n",n);
  Pre_In_Post(n-1);
  printf("In: %d\n",n);
  Pre_In_Post(n-1);
  printf("Post: %d\n",n);
  return;
}

int main (){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  Pre_In_Post(n);
  
  return 0;
}