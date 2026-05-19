#include <stdio.h>

int factorial(int n){
  int factValue = 1;
  for (int i = 2; i <= n; i++) {
    factValue *= i;
  }
  return factValue;
}
int NCR(int n,int r){
  //ncr = n!/r!*(n-r)!
  int ncr = factorial(n)/(factorial(r)*(factorial(n-r)));
  return  ncr;
}

void pascal(int n){
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n-i; j++) {
      printf(" ");
    }
    for (int j = 0; j <= i; j++) {
      printf("%d ",NCR(i,j));
    }
    printf("\n");
  }
  
}


int main (){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  pascal(n);
  return 0;
};