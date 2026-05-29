#include <stdio.h>
int main(){
  int n,m;
  
  printf("Enter no of (n): ");
  scanf("%d",&n);
  
  printf("Enter how many (m): ");
  scanf("%d",&m);
  
  int arr[n][m];
  
  for (int i = 0; i < n; i++)
  {
    printf("Enter (1st row elements): ");
    for (int j = 0; j < m; j++) 
    {
      scanf("%d",&arr[i][j]);
    }
  }
  
  printf("The output of your result: \n");
  
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++) 
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++) 
    {
      sum += arr[i][j];
    }
    
  }
  
  printf("the sum of matrix is: %d\n",sum);
  
  return 0;
}