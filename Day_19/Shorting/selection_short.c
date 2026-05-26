#include <stdio.h>

void printArray(int arr[],int n)
{
  for (int i = 0; i < n; i++) {
    printf("%d ",arr[i]);
  }
  return;
}

void selectionShort(int arr[],int n)
{
  for (int i = 0; i < n; i++) 
  {
    int min = i;
    for (int j = i+1; j < n-i; j++) 
    {
      if(arr[j] < arr[min]) min = j;
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
  return;
}

int main(){
  int arr[5] = {5,4,3,2,1};
  int n = 5;
  selectionShort(arr,n);
  printArray(arr,n);
  return 0;
}