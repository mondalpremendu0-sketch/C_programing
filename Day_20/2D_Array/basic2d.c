#include <stdio.h>
int main(){
  //2D Array initilization:
//  0 1 idx
  //1 2 => 0 idx
  //3 4 => 1 idx
  //5 6 => 2 idx
   int arr[3][2] = {{1,2},{3,4},{5,6}};
   printf("%d ",arr[0][1]);
  
  int array[3][2];
  array[0][0] = 45;
  array[0][1] = 34;
  array[1][0] = 12;
  array[1][1] = 18;
  array[2][0] = 80;
  array[2][1] = 20;
  printf("%d %d",array[1][0],array[2][1]);
  return 0;
}