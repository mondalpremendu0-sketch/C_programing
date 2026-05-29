#include <stdio.h>

int main(){
  int matrix[5][5];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      matrix[i][j] = 10;
    }
  }
  
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      /* code */
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}