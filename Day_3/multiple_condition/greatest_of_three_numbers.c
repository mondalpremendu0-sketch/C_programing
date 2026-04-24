#include <stdio.h>
int main (){
  int a,b,c;
  printf("Enter 3 number: ");
  scanf("%d %d %d",&a,&b,&c);
  
  if(a == b || b==c || c == a){
    printf("Inputs nums are  equal to each other\n");
  }else {
  
  if(a > b && a > c){
    printf("%d is greatest",a);
  }
  else if(b > a && b > c){
    printf("%d is greatest",b);
  }
  else{
    printf("%d is greatest\n",c);
  }
  }
  return 0;
}