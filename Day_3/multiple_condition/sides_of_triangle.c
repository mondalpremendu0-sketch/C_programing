#include <stdio.h>
int main (){
  int a,b,c;
  printf("Enter sides of trinagle: ");
  scanf("%d %d %d",&a,&b,&c);
  if(a+b > c && b+c > a && c+a > b){
    printf("Yes this can make a triangle\n");
  }
  else{
    printf("Not a this can not make a triangle\n");
  }
  return 0;
}