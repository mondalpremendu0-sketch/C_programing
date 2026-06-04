#include <stdio.h>

void printArray(int rows,int cols,int arr[rows][cols]){
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  
}
void transpose(int rows,int cols,int arr[rows][cols]){
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      printf("%d ",arr[j][i]);
    }
    printf("\n");
  }
}

int main(){
  int rows,cols;
  printf("Enter row and cols: ");
  scanf("%d %d",&rows,&cols);
  
  int arr[rows][cols];
  
  for (int i = 0; i < rows; i++) {
    printf("Enter (%d) rows elem: ",i+1);
    for (int j = 0; j < cols; j++) {
      scanf("%d",&arr[i][j]);
    }
  }
  
  printArray(rows,cols,arr);
  
  transpose(rows,cols,arr);
  return 0;
}