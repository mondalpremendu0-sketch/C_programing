#include <stdio.h>

void printArray(int a[],int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ",a[i]);
  }
  return;
}
void reverse(int a[],int startIndex,int endIndex)
{
  int i = startIndex ,j = endIndex;
  while(i <= j)
  {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
  }
  return;
}

int main (){
  int arr[5] = {1,2,3,4,5};
  int n = 5, k = 3;
  k = k % n;
   // step-1:
   reverse(arr,0,n-1);
  
   // step-2:
   reverse(arr,0,k-1);
  
   // step-3:
   reverse(arr,k,n-1);
  
  printArray(arr,n);
  return 0;
}