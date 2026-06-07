#include <stdio.h>
#include <string.h>
int main(){
  struct book{
    char name[40];
    int price;
    int noOfPages;
  };
  
  struct book OnePice;
  //strcpy --> very important func for string after declaration it copy the string and push into the str array
  strcpy(OnePice.name,"OnePice");
  OnePice.price = 400;
  OnePice.noOfPages = 1170;
  
  struct book Naruto;
  strcpy(Naruto.name,"Naruto");
  Naruto.price = 500;
  Naruto.noOfPages = 720;
  
  printf("%s",OnePice.name);
  
  return 0;
}