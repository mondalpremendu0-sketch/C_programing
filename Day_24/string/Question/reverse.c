#include <stdio.h>
#include <string.h>

int main(){
  char str[40];
  printf("Enter any string: ");
  scanf("%[^\n]s",str);
  int i = 0, j = strlen(str) - 1;
  while(i < j){
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
  printf("the reverse string: %s\n",str);
  return 0;
}