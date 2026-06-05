#include <stdio.h>

int main(){
  int arr[3][3] = {
    {1,2,3},
    {5,6,7},
    {9,8,4}
  };
  
  for (int i = 0; i < 3; i++) {
    for (int j = i; j < 3; j++) {
      
        int temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;
      
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  
  
  return 0;
}