#include <stdio.h>
void printArray(int r,int c, int arr[r][c]){
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
}

int main(){
  int r1,c1;
  printf("Enter matrix_1 row & cols: ");
  scanf("%d %d",&r1,&c1);
  
  int arr_1[r1][c1];
  for (int i = 0; i < r1; i++) {
    printf("Enter (%d) row elem: ",i+1);
    for (int j = 0; j < c1; j++) {
      scanf("%d",&arr_1[i][j]);
    }
  }
  
  printArray(r1,c1,arr_1);
  printf("\n");
  
  int r2,c2;
  printf("Enter matrix_2 rows & cols: ");
  scanf("%d %d",&r2,&c2);
  
  int arr_2[r2][c2];
  for (int i = 0; i < r2; i++) {
    printf("Enter (%d) row elem: ",i+1);
    for (int j = 0; j < c2; j++) {
      scanf("%d",&arr_2[i][j]);
    }
  }
  
  printArray(r2,c2,arr_2);
  printf("\n");
  
  
  if(c1 == r2){
    int arr_3[r1][c2];
    
    for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c2; j++) {
        arr_3[i][j] = 0;
        for (int k = 0; k < c1; k++) {
          arr_3[i][j] += arr_1[i][k] * arr_2[k][j];
        }
      }
    }
    printArray(r1,c2,arr_3);
  }else printf("Multiplication ❌  not possible!\n");
  return 0;
}