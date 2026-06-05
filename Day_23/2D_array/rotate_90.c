#include <stdio.h>
void printArray(int r,int c, int arr[r][c]){
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
}
int main(){
  int r = 3,c = 3;
  int arr[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
 // printArray(r,c,arr);
  for (int i = 0; i < r; i++) {
    for (int j = i; j < c; j++) 
    {
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }
  
  for (int i = 0; i < r; i++) 
    {
  int j = 0, k = c-1;
      while(j < k){
        int temp = arr[i][j];
        arr[i][j] = arr[i][k];
        arr[i][k] = temp;
        j++;
        k--;
      }
    }

  printArray(r,c,arr);
  
  return 0;
}