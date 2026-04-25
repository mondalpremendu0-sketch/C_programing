#include <stdio.h>
int main(){
//The AP = 1,3,5,7.....
  //an = a + (n-1)*d
  //a=1,d=2 =>> 1 + (n-1) *2
  //         ==>>2*n - 1
  int n;
  printf("The nth term: ");
  scanf("%d",&n);
  for(int i = 1; i <= 2*n -1; i=i+2){
    printf("%d ",i);
  }
  printf("\n");
  
  //Now AP = 4,7,10,13.....
  for(int i = 4; i <= 3*n + 1; i+=3){
    printf("%d ",i);
  }
    printf("\n");

  //AP = 100,97,94..... upto positive terms
  int a = 100;
  for(int i = 0; a > 0; i++){
    printf("%d ",a);
    a = a - 3;
  }
  return 0;
}