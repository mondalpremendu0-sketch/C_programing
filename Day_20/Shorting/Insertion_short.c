#include <stdio.h>

void printArray(int arr[],int n)
{
  for (int i = 0; i < n; i++) {
    printf("%d ",arr[i]);
  }
  return;
}

void insertionShort(int arr[],int n)
{
  for (int i = 0; i <= n-1; i++) 
  {
    int j = i;
    while(j >= 1 && arr[j] < arr[j-1]){
      int temp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = temp;
      j--;
    }
    
  }
  return;
}

int main(){
  int arr[5] = {5,4,3,2,1};
  int n = 5;
  insertionShort(arr,n);
  printArray(arr,n);
  return 0;
}