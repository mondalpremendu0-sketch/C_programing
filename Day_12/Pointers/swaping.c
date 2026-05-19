#include <stdio.h>
void swap(int* x, int* y){
  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;
  return;
}
int main(){
  int a,b;
  printf("Enter 2 numbers: ");
  scanf("%d %d",&a,&b);
  int* p = &a;
  int* q = &b;
  swap(p,q);
  printf("%d %d",a,b);
  return 0;
}