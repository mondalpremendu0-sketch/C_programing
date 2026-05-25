#include <stdio.h>

int maze(int cr,int cc,int er,int ec){
  int rightWays = 0;
  int downWays = 0;
  
  if(cr == er && cc == ec ) return 1;
  if(cr == er){
    rightWays += maze(cr,cc+1,er,ec);
  }
  if(cc == ec){
    downWays += maze(cr+1,cc,er,ec);
  }
  if(cr < ec && cc < ec){
    rightWays += maze(cr,cc+1,er,ec);
    downWays += maze(cr+1,cc,er,ec);
    
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
  int totalWay = maze(1,1,rows,column);
  printf("total number of ways to go there: %d\n",totalWay);
  return 0;
}