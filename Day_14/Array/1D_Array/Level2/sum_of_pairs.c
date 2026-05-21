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
  int x = 6,count = 0;
  for (int i = 0; i < 5; i++) 
  {
    for (int j = i+1; j < 5; j++)
    {
      if(arr[i] + arr[j] == x)
      {
        printf("(%d,%d) ",arr[i],arr[j]);
        count++;
      }
    }
  }
  printf("\nTotal Number of pairs: %d\n",count);
  printArray(arr);
  return 0;
}