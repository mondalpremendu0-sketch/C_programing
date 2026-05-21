#include <stdio.h>

void printArray(int a[])
{
  for (int i = 0; i < 5; i++) 
  {
    printf("%d ",a[i]);
  }
}

int SecondMax_Method_1(int arr[])
{
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
  
  return smax;
}

int SecondMax_Method_2(int arr[])
{
  int max = arr[0];
  int smax = arr[1];
  for (int i = 0; i < 5; i++) 
  {
    if(max < arr[i])
    {
      smax = max;
      max = arr[i];
    }
    
  }

  return smax;
}

int SecondMax_Method_3(int arr[])
{
  int max = arr[0];
  int smax = arr[1];
  for (int i = 0; i < 5; i++) 
  {
    if(max < arr[i])
    {
      smax = max;
      max = arr[i];
    }
    
    else if (arr[i] != max && smax < arr[i])
    {
      smax = arr[i];
    }
  }

  return smax;
}



int main()
{
  int arr[5] = {1,2,3,4,5};
  printArray(arr);
  printf("\n%d",SecondMax_Method_1(arr));
  printf("\n%d",SecondMax_Method_2(arr));
  printf("\n%d",SecondMax_Method_3(arr));
  return 0;
}