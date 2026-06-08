#include <stdio.h>
#include <string.h>
int main(){
  struct person {
    char name[15];
    int age;
    float salary;
    int cars;
  }person_1,person_2;
  
  strcpy(person_1.name,"Hello world");
  person_1.age = 30;
  person_1.salary = 3000.67;
  person_1.cars = 3;
  
  strcpy(person_2.name,"Hello");
  person_2.age = 23;
  person_2.salary = 3100.7;
  person_2.cars = 5;
  
  printf("%s\n",person_2.name);
  printf("%s\n",person_1.name);
  printf("%d\n",person_1.age);
  printf("%d\n",person_2.age);
  printf("%f\n",person_2.salary);
  
  
  return 0;
}