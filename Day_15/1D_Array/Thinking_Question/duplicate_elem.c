#include <stdio.h>

void duplicateNum(int arr[],int size)
{
  int count = 0;
  for (int i = 0; i < size; i++) 
  {
    for (int j = i + 1; j < size; j++)
    {
      if(arr[i] == arr[j])
      {
        count++;
        printf("duplicate number: %d\n",arr[i]);
        break;
      }
    }
  }
  return;
}

int main (){
  int arr[5] = {1,2,3,2,3};
  int size = 5;
  duplicateNum(arr,size);
  return 0;
}