#include <stdio.h>
void search(int a[],int x,int size)
{
  for (int i = 0; i < size; i++) 
  {
    if(a[i] == x)
    {
      printf("index: %d",i);
    }
  }
  return;
}


int main (){
  int arr[5] = {1,2,3,4,5};
  int y = 4, size = 5;
  search(arr,y,size);
  
  return 0;
}