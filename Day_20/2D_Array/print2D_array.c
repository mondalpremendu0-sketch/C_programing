#include <stdio.h>
int main(){
  //2D Array initilization:
//  0 1 idx
  //1 2 => 0 idx
  //3 4 => 1 idx
  //5 6 => 2 idx
   int arr[3][2] = {{1,2},{3,4},{5,6}};
   
   for (int i = 0; i < 3; i++) {
     for (int j = 0; j < 2; j++) {
       printf("%d ",arr[i][j]);
     }
     printf("\n");
   }
  
  
  return 0;
}