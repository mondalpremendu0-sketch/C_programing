#include <stdio.h>
int main (){
  int n;
  printf("Enter row no: ");
  scanf("%d",&n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n-i ; j++) {
      printf(" ");
    }
    for (int j = 1; j <= i ; j++) {
      printf("%d",j);
      
    }
    for (int j = 2; j <= i ; j++) {
      printf("%d",i-j+1);
      
    }
    
    printf("\n");
  }
  return 0;
}