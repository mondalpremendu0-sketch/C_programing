#include <stdio.h>

int maze(int n,int m){
  int rightWays = 0;
  int downWays = 0;
  if(n == 1 && m == 1) return 1;
  else if(n == 1){
    rightWays += maze(n,m-1);
  }
  else if(m == 1){
    downWays += maze(n-1,m);
  }}
  else{
    rightWays += maze(n,m-1);
    downWays += maze(n-1,m);
  }
  int totalWays = rightWays + downWays;
  return totalWays;
}

int main (){
  int rows,column;
  printf("Enter a rows: ");
  scanf("%d",&rows);
  
  printf("Enter a column: ");
  scanf("%d",&column);
  int totalWay = maze(rows,column);
  printf("total number of ways to go there: %d\n",totalWay);
  return 0;
}