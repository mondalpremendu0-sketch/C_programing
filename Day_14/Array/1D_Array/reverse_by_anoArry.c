#include <stdio.h>

void printArray(int a[])
{
  for (int i = 0; i < 5; i++) 
  {
    printf("%d ",a[i]);
  }
}
int main()
{
  int arr[5] = {1,2,3,4,5};
  int copyArry[5];
  for (int i = 0; i < 5; i++) 
  {
    copyArry[i] = arr[5-i-1];
  }
  printArray(copyArry);
  return 0;
}