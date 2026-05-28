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
  for (int i = 0; i < n; i++) {
    for (int j = n-1; j >= 0; j--) {
      if(arr[i] == 0){
        int temp = arr[j];
        arr[j] = 0;
        arr[i] = temp;
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