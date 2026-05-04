#include <stdio.h>
 int main(){
  int x = 4,y,z;
  while(x < 10){
    printf("%d ",x);
    x++;
  }
  y = --x;
  z=x--;
  printf("%d %d %d",x,y,z);

//post => 1st use it then inc or dec
//pre => 1st  inc or dec then use it

  return 0;
}