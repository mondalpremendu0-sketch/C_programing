#include <stdio.h>
void fibonacci(int n){
  int a = 0,b = 1,c = 0;
  printf("%d %d ",a,b);
  for (int i = 2; i < n-1; i++) {
    c = a + b;
    a = b;
    b = c;
    printf("%d ",a);
  }
  
  return;
}
int main (){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  fibonacci(n);
  return 0;
}