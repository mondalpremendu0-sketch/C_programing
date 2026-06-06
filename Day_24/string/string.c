#include <stdio.h>
int main(){
  char arr[] = "Hello\0";// '\0' -> null operator
  for (int i = 0; i < 5; i++) {
    printf("%c",arr[i]);
  }
  printf("\n");
  int a = 0;
  while(arr[a] != '\0'){
    printf("%c",arr[a]);
    a++;
  }
  return 0;
}