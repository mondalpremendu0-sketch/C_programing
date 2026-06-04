]#include <stdio.h>

int main(){
  int arr[2][3] = {{10,2,3},{1,7,5}};
  int r = 2, c = 3;
  int maxSum = 0;
  int rowNo = 0;
  for (int i = 0; i < r; i++) {
    int sum = 0;
    for (int j = 0; j < c; j++) {
      sum += arr[i][j];
    }
    printf("%d row sum(%d) = %d\n",i+1,i,sum);
    if(i == 0 || sum > maxSum ){
      maxSum = sum;
      rowNo = i;
    }
}

printf("%d the row no and the sum %d ",rowNo,maxSum);

  return 0;
}