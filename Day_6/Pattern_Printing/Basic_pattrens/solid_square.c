#include <stdio.h>
int main (){
  int row;
  printf("Enter row and col number: ");
  scanf("%d",&row);
  for(int i = 0; i < row; i++){
    for(int j = 0; j < row; j++){
      printf("* ");
    }
    printf("\n");
  }
  
  return 0;
}