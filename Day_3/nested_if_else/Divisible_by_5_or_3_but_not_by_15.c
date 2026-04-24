//nested means =>> example
//if (condition){
//   if(condition){
//     code..
//     if(condition){
//       code..
//     }else{
//       code..
//     }
//     }
//   }else{
//     code..
//   }
//   and so on...
// }

#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  if(n%5 ==0 || n%3 ==0){
    if(n%15 != 0){
    printf("%d divisible by 5 or 3 but not divisible by 15.\n",n);
    }
    else{
    printf("%d  divisible by 5 or 3\n",n);
  }
  }
  return 0;
}