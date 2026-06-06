#include <stdio.h>
#include <string.h>
int main(){
  char str[50];
  printf("Enter your name: ");
  //for input a string
  fgets(str, sizeof(str), stdin);
  //for output of the string
  puts(str);
  
  return 0;
}