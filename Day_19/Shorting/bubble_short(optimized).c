#include <stdio.h>
void printArray(int arr[],int size){
  for (int i = 0; i < size; i++) {
    printf("%d ",arr[i]);
  }
}
void bubbleShort(int arr[],int size){
  //optimization 1: => i<n-1
  for (int i = 0; i < size-1; i++) {
  //optimization 2: => j<n-i-1
    for (int j = 0; j < size-i-1; j++) {
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  return;
}
int main(){
  int arr[5] = {5,4,3,2,1};
  int n = 5;
  bubbleShort(arr,n);
  printArray(arr,n);
  return 0;
}