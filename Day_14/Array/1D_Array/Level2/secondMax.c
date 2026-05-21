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
  int max = arr[0];
  int smax = arr[1];
  for (int i = 0; i < 5; i++) 
  {
    if(max < arr[i]) max = arr[i];
  }
  for (int j = 0; j < 5; j++) 
  {
    if(arr[j] != max && smax < arr[j]) smax = arr[j];
  }
  printArray(arr);
  printf("\n%d",smax);
  return 0;
}