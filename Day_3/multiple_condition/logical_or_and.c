  //logical or ==>> || means from both conditions one of them is true 
  //logical and ==>> && means both conditions true at a same time
#include <stdio.h>
int main(){
  //1. Check whether a num is divisible by 5 or 3 ?
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);

  if(n%5 ==0 || n%3 ==0){
    printf("%d divisible by 5 or 3\n",n);
  }else{
    printf("%d not divisible by 5 or 3\n",n);
  }
  
  //1. Check whether a num is divisible by 5 or 3 ?
  if(n%5 ==0 && n%3 ==0){
    printf("%d is Divisible by 5 and 3\n",n);
  }else{
    printf("%d Not Divisible\n",n);
  }
  return 0;
}