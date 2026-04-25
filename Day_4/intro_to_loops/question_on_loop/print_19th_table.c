#include <stdio.h>
int main(){
  int n = 19;
  for(int i = 1; i <= 10; i++){
    printf("%d x %d = %d\n",n,i,n*i);
  }
  
  //this for dynamic printing 
  int x ;
  printf("Enter A number: ");
  scanf("%d",&x);
  for(int i = 1; i <= 10; i++){
    printf("%d x %d = %d\n",x,i,x*i);
  }
  return 0;
}