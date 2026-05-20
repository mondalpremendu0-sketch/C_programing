#include <stdio.h>

void printArray(int a[]){
  for (int i = 0; i < 5; i++) {
    printf("%d ",a[i]);
  }
}

int main (){
  int arr[5] = {1,2,3,4,5};
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += arr[i];
  }
  printf("%d ",sum);
  printf("\n");
   printArray(arr);
  return 0;
}