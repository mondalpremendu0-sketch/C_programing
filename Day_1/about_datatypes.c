
#include<stdio.h>
int main(){
  //-----data types in C----
  //1. integers ==> "int"
  int x = 5;
  printf("%d",x);
  
  //2. float ==> "float"
  float PI = 3.14;
  printf("%f",PI);
  
  //difference btw int &, float;
  
  int num1 = 34;
  float a = 5;
  float b = 2;
  printf("%f\n",a/b);//its print 2.500000
  printf("%d\n",num1);//its print 34
  
  //3. Character ==> "char"
  char ch = 'a';
  printf("%c",ch);//prints a
  
  return 0;
}