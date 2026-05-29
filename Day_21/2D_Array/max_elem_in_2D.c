#include <stdio.h>

int main(){
  int matrix[5][5];
  for (int i = 0; i < 5; i++) {
    printf("Enter %dth row elem: ",i+1);
    for (int j = 0; j < 5; j++) {
      scanf("%d",&matrix[i][j]);
    }
  }
  
  printf("The output matrix: \n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }
  int max = matrix[0][0];
  
  for (int i = 0; i < 5; i++) {
    for (int j = 1; j < 5; j++) {
      if(matrix[i][j] > max) {
        max = matrix[i][j];
      }
    }
  }
  
  printf("maximum: %d",max);
  return 0;
}