#include <stdio.h>

int main(){
  
  int r,c;
  printf("Enter (row) and (column): ");
  scanf("%d %d",&r,&c);
  
  int matrix[r][c];
  for (int i = 0; i < r; i++) {
    printf("Enter %dth row elem: ",i+1);
    for (int j = 0; j < c; j++) {
      scanf("%d",&matrix[i][j]);
    }
  }
  
  printf("The output matrix: \n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }
  
  int max = matrix[0][0],idx = 0;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if(matrix[i][j] > max){
        max = matrix[i][j];
        idx = i;
      }
    }
  }
  
  switch(idx){
    case 1:printf("the maximum element is in %dnd row",idx+1);break;
    case 2:printf("the maximum element is in %drd row",idx+1);break;
    default:printf("the maximum element is in %dth row",idx+1);
  }
  
  return 0;
}