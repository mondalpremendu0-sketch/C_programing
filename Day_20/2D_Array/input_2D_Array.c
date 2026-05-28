#include <stdio.h>
int main(){
  //2D Array initilization:
//  0 1 idx
  //1 2 => 0 idx
  //3 4 => 1 idx
  //5 6 => 2 idx
   int arr[3][2];
   
   for (int i = 0; i < 3; i++) {
     for (int j = 0; j < 2; j++) {
       printf("Enter (%d,%d)th elem: ",i,j);
       scanf("%d",&arr[i][j]);
     }
   }
   printf("The array you input: \n");
   for (int i = 0; i < 3; i++) {
     for (int j = 0; j < 2; j++) {
       printf("%d ",arr[i][j]);
     }
     printf("\n");
   }
  
  
  return 0;
}