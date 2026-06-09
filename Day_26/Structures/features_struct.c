#include <stdio.h>
int main(){
  typedef struct Book {
    int pages;
    float price;
  } Book;
  
  Book a,b,c;
  a.pages = 990;
  a.price = 56.7;
  
  //b.pages = a.pages;
  //b.price = a.price;
  b = a;//deep copy..
  
  printf("%d\n",a.pages);
  printf("%f\n",a.price);
  
  printf("%d\n",b.pages);
  printf("%f\n",b.price);
  return 0;
}