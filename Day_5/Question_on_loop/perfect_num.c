#include <stdio.h>
int main (){
  int n ,sum = 1;
  printf("Enter a number: ");
  scanf("%d",&n);
  for (int i = 2; i <= n-1; i++) {
    if (n%i == 0){
      sum = sum + i;
    }
  }
  if(sum == n)printf("%d is a perfect number.\n",n);
  else printf("%d is a not perfect number.\n",n);
  return 0;
}