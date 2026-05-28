#include <stdio.h>
void printArray(int arr[],int n)
{
  for (int i = 0; i < n; i++) {
    printf("%d ",arr[i]);
  }
  return;
}

void push0ToEnd(int arr[],int n)
{
  for (int i = 0; i < n-1; i++) {
    for (int j = i; j < n-1-i; j++) {
      if(arr[j] == 0){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  return;
}
int main()
{
  int arr[9] = {5,0,2,3,0,4,0,0,7};
  int n = 9,idx = 0;
  int ans[9];
  for (int i = 0; i < n; i++) {
    if(arr[i] != 0){
      ans[idx] = arr[i];
      idx++;
    }
  }
  while(idx < n){
    ans[idx] = 0;
    idx++;
  }
  printArray(ans,n);
  printf("\n");
  push0ToEnd(arr,n);
  printArray(arr,n);
}