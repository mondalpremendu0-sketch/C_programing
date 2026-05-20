#include <stdio.h>

void printArray(int a[]){
  for (int i = 0; i < 5; i++) {
    printf("%d ",a[i]);
  }
}

int main (){
  int arr[5] = {1,2,3,4,5};
  printArray(arr);
  printf("\n");
  for (int i = 4; i >= 0; i--) {
    printf("%d ",arr[i]);
  }
 
  
  return 0;
}