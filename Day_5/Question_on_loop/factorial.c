#include <stdio.h>
int main(){
  int n,mul=1;
  printf("Enter A number: ");
  scanf("%d",&n);
  for (int i = 1; i <= n; i++){
    mul = mul * i;
  }
  printf("fac = %d\n",mul);
  return 0;
  
}