#include <stdio.h>
int main (){
  int n = 64,row;
  printf("Enter row number: ");
  scanf("%d",&row);
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= row-i; j++) {
      printf(" ");
    }
    for (int j = 1; j <= i; j++) {
      char ch = (char)n+j;
      printf("%c",ch);
    }
    printf("\n");
  }
  return 0;
}
