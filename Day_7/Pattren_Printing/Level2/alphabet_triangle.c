#include <stdio.h>
int main (){
  int n = 65;
  int row;
  printf("Enter row no: ");
  scanf("%d",&row);
  for (int i = 0; i < row; i++) {
  
    for (int j = 0; j <= i; j++) {
    
      char ch = (char)n+j;
      printf("%c ",ch);
    }
    printf("\n");
  }
  return 0;
}