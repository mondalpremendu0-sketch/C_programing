#include<stdio.h>
int main(){
  typedef struct Book {
    int pages;
    float price;
  } Book;
  
  Book arr[2];
  
  arr[0].pages = 89;
  arr[0].price = 89.78;
  
  arr[1].pages = 79;
  arr[1].price = 79.78;
  
  arr[2].pages = 45;
  arr[2].price = 69.78;
  
  for (int i = 0; i <= 2; i++) {
    printf("%d\n",arr[i].pages);
    printf("%f\n",arr[i].price);
  }
  return 0;
}