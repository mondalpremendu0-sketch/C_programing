#include <stdio.h>
int min(int a, int b){
  int min;
  if(a>b) min = b;
  else min = a;
  return min;
}
int gcd (int x ,int y){
  int gd;
  for (int i = min(x,y); i >= 1 ; i++) {
    if(x%i == 0 && y%i == 0){
      gd = i;
      break;
    }
  }
  return gd;
}
int main(){
  int a,b,hcf;
  printf("Enter 2 numbers: ");
  scanf("%d %d",&a,&b);
  hcf = gcd(a,b);
  printf("%d ",hcf);
  return 0;
}