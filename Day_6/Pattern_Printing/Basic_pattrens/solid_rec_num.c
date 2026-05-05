#include <stdio.h>
int main (){
  int row;
  printf("Enter row number: ");
  scanf("%d",&row);
  for(int i = 0; i < row; i++){
    for(int j = 1; j <= row; j++){
      printf("%d ",j);
    }
    printf("\n");
  }
  
  return 0;
}