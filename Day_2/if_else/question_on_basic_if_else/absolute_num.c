#include <stdio.h>
int main (){
  int x;
  printf("Enter a number: ");
  scanf("%d",&x);
  if(x < 0){
    x = x * (-1);//|x| = x ,x>0
                //     = -x,x<0
  }
  printf("The absulate nubmer: %d\n",x);
  return 0;
}