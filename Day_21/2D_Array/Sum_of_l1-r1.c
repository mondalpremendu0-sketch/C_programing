#include <stdio.h>

int main(){
  
  int r,c;
  printf("Enter (row) and (column): ");
  scanf("%d %d",&r,&c);
  
  int matrix[r][c];
  for (int i = 0; i < r; i++) {
    printf("Enter %dth row elem: ",i+1);
    for (int j = 0; j < c; j++) {
      scanf("%d",&matrix[i][j]);
    }
  }
  
  printf("The output matrix: \n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }
  
  int l1,r1,l2,r2;
  
  printf("Enter starting point (r1,l1): ");
  scanf("%d %d",&r1,&l1);
  
  printf("Enter starting point (r2,l2): ");
  scanf("%d %d",&r2,&l2);
  
  int sum = 0;
  
  for (int i = r1; i <= r2; i++) {
    for (int j = l1; j <= l2; j++) {
      sum += matrix[i][j];
      }
    }
  
  printf("the sum : %d",sum);
  return 0;
}