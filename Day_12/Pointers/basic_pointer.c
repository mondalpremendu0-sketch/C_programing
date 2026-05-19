#include <stdio.h>

int main (){
  
  int a = 5;
  int* x = &a;//storing the address in x
  *x = 25;//the value of a will changed..
  
  printf("%p\n",x);//%p for print the memory address
  printf("%d\n",*x);//for print the value iin that memory
  
  printf("%p",&x);
  
  return 0;
}