#include <stdio.h>
int main(){
  //GP = 1,2,4,8.... upto n terms.
  int n ;
  printf("Enter n : ");
  scanf("%d",&n);
  int a = 1;
  for(int i = 1; i <= n; i++){
    printf("%d ",a);
    a = a * 2;
  }
  return 0;
}