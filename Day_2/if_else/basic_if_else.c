//if else means conditional statement its control the whole program basic effel syntax is 

//if(condition){
  //code
//}else{
  //code
//}

#include <stdio.h>
int main (){
//1. tell the year is leap year or not
  int year;
  printf("Enter year: ");
  scanf("%d",&year);
  if(year % 4 == 0){
    printf("%d is a leapyear\n",year);
  }else{
    printf("%d is not a leapyear\n",year);
  }

  
  return 0;
}