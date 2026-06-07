#include <stdio.h>
int main(){
  char str[40] = "hello";
  //4th index -> 'w'
  for (int i = 6; i >= 3; i--) {
    str[i+1] = str[i];
  } 
  str[4] = 'w';
  printf("%s\n",str);
  return 0;
}