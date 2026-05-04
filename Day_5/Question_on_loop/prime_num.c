#include <stdio.h>
int main(){
  int n ,a = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  for(int i = 2; i < n; i++){
    if(n % i == 0){
      a = 1;
      break;
    }
  }
  if(n == 1)printf("This is neither prime nor Composite number");
  else if (a == 0) printf("This is prime number");
  else printf("This is not a  prime number");
  return 0;
}