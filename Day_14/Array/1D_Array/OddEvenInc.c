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
  for (int i = 0; i < 5; i++) 
  {
    if(i % 2 == 0) arr[i] *= 2;
    else arr[i] += 10;
  }
  printArray(arr);
  return 0;
}