#include <stdio.h>
int main(){
  //2D Array initilization:
//  0 1 idx⁰
  //1 2 => 0 idx
  //3 4 => 1 idx
  //5 6 => 2 idx
  // int arr[3][2] = {{1,2},{3,4},{5,6}};
  // printf("%d ",arr[0][1]);
  
  int arr[3][2];
  arr[0][0] = 45;
  arr[0][1] = 34;
  arr[1][0] = 12;
  arr[1][1] = 18;
  arr[2][0] = 80;
  arr[2][1] = 20;
  printf("%d %d",arr[1][0],arr[2][1]);
  return 0;
}