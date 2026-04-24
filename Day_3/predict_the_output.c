#include <stdio.h>
int main(){
  int x = 5,y,z;
   y = x = 15;
  z = x < 15;
  printf("x = %d and y = %d and z = %d\n",x,y,z);
  return 0;
}

//output=>>
//x = 15 and y = 15 and z = 0