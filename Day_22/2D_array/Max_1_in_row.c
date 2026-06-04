#include <stdio.h>

int main(){
  int arr[3][4] = {
    {1,0,1,1},
    {0,1,0,1},
    {1,0,0,1},
  };
  
  int r = 3, c = 4;
  int max_1_count = 0;
  int rowNo = 0;
  for (int i = 0; i < r; i++) {
    int count_1 = 0;
    for (int j = 0; j < c; j++) {
      if(arr[i][j] == 1) count_1++;
    }
    printf("%d rows (1): %d\n",i+1,count_1);
    if(i == 0 || max_1_count > count_1){
      max_1_count = count_1;
      rowNo = i;
    }
  }
  printf("%d row has max no of (1)",rowNo);
  return 0;
}