#include <stdio.h>

void printArray(int a[]){
  for (int i = 0; i < 5; i++) {
    printf("%d ",a[i]);
  }
}

int main (){
  int arr[5] = {1,2,3,4,5};
 // printArray(arr);
 int i = 0,j = 4;
  while(i != j)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
  printArray(arr);
  return 0;
}