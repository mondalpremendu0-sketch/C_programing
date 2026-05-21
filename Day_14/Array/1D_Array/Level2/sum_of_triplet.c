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
  int x = 8,count = 0;
  for (int i = 0; i < 5; i++) 
  {
    for (int j = i+1; j < 5; j++)
    {
      for (int k = j+1; k < 5; k++) 
      {
        if(arr[i] + arr[j] + arr[k] == x)
        {
          printf("(%d,%d,%d) ",arr[i],arr[j],arr[k]);
           count++;
        }
      }
    }
  }
  printf("\nTotal Number of triples: %d\n",count);
  printArray(arr);
  return 0;
}