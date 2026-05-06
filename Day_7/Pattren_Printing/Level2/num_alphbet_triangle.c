#include <stdio.h>
int main (){
  int n = 64;
  int row;
  printf("Enter row no: ");
  scanf("%d",&row);
  for (int i = 1; i <= row; i++) {
  
    for (int j = 1; j <= i; j++) {
      
      if(i %2 != 0 )printf("%d ",j);
      else if(i % 2 == 0 ){
      char ch = (char)n+j;
      printf("%c ",ch);
      }
      else printf(" ");
    }
    printf("\n");
  }
  return 0;
}


