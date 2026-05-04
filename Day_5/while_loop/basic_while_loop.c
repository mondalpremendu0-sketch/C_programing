#include <stdio.h>
//syntax ==> 
 
// int i = 1; declaration
// while(condition){
//   code;
//   increase i 
//   i++;
// }
int main (){
  int n,c = 0;
  printf("Enter A number: ");
  scanf("%d",&n);
    while(n > 0){
      n = n /10;
      c++;
    }

  printf("The no of digits %d",c);
  return 0;
}