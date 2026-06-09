#include <stdio.h>

int main(){
  typedef struct Cricketer
  {
    char name[15];
    int age;
  } Cricketer;
  
  Cricketer arr[20];
  for (int i = 0; i < 2; i++) {
    printf("Enter name: ");
    scanf("%s",arr[i].name);
    
    printf("Enter age: ");
    scanf("%d",&arr[i].age);
  }
  for (int i = 0; i < 2; i++) {
    printf("%s ",arr[i].name);
    printf("%d ",arr[i].age);
  }
  
  return 0;
}