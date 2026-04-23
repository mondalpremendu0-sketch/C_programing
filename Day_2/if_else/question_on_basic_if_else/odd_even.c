#include <stdio.h>
int main(){
  int x;
  printf("Enter a number: ");
  scanf("%d",&x);
  if(x%2 == 0){
    printf("This is an even no\n");
  }
  else{
    printf("This is an odd no\n");
  };
  printf("\nProgram finished..\n");
  return 0;
}