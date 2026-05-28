#include <stdio.h>
int main(){
  int rows, columns;
  
  printf("Enter no of rows: ");
  scanf("%d",&rows);
  
  printf("Enter how many columns: ");
  scanf("%d",&columns);
  
  //1st matrix
  int matrix_1[rows][columns];
  //2nd matrix
  int matrix_2[rows][columns];
  //sum result matrix
  int sum_of_matrix[rows][columns];
  
  printf("Enter 1st matrix\n");
 // 1st matrix_1 input
  for (int i = 0; i < rows; i++)
  {
    printf("Enter (%dst row elements): ",i+1);
    for (int j = 0; j < columns; j++) 
    {
      scanf("%d",&matrix_1[i][j]);
    }
  }
  
  printf("Enter 2nd matrix\n");
 // 2nd matrix_2 input
  for (int i = 0; i < rows; i++)
  {
    printf("Enter (%dst row elements): ",i+1);
    for (int j = 0; j < columns; j++) 
    {
      scanf("%d",&matrix_2[i][j]);
    }
  }
  
  printf("The sum of your matrix_1 and matrix_2: \n");
  //print the sum
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++) 
    {
      sum_of_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
      printf("%d ",sum_of_matrix[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}