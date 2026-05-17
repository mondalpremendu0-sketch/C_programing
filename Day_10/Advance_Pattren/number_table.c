#include <stdio.h>
int main (){
  int n =4;
  
  for (int i = 0; i <= n; i++) {
    int a = 1;
    for (int j = 1; j <= n-i; j++) {
      printf("%d",a);
      a++;
    }
    for (int j = 1; j <= 2*i; j++) {
    printf(" ");
    a++;
    }
    for (int j = 1; j <= n-i; j++) {
    printf("%d",a);
      a++;
    }
    
    printf("\n");
  }
  return 0;
}