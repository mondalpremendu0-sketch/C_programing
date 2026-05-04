#include <stdio.h>
int main(){
  int n,rev=0;
//Reverse A Number.....
  printf("Enter A number: ");
  scanf("%d",&n);
    while(n != 0) {
      int rem = n % 10;
      rev *= 10;
      rev  += rem;
      n /= 10;
    }
  printf("The rev of digits %d",rev);
  return 0;
}