#include <stdio.h>
int main(){
  //2D Array initilization:
//  0 1 idx⁰
  //1 2 => 0 idx
  //3 4 => 1 idx
  //5 6 => 2 idx
  int arr[3][2] = {{1,2},{3,4},{5,6}};
  printf("%d ",arr[0][1]);
  return 0;
}