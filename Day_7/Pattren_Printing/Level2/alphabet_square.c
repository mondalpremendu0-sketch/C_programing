#include <stdio.h>
int main (){
  int n = 65;
  
  for (int i = 0; i < 4; i++) {
  
    for (int j = 0; j < 4; j++) {
    
      char ch = (char)n+j;
      printf("%c ",ch);
    }
    printf("\n");
  }
  return 0;
}