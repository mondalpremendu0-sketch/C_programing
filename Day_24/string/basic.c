#include <stdio.h>

int main(){
  char arr[5] = {'a','b','c','d','e'};
  printf("%c\n",arr[0]);
  printf("%c\n",arr[1]);
  printf("%c\n",arr[2]);
  printf("%c\n",arr[3]);
  printf("%c\n",arr[4]);
  for (int i = 0; i < 5; i++) {
    printf("%c",arr[i]);
  }
  return 0;
}