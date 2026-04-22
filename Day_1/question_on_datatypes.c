#include <stdio.h>
int main(){
  //1. find percentage of given 5 subjects
  
  float x1 = 93;
  float x2 = 71;
  float x3 = 90;
  float x4 = 92;
  float x5 = 90;
  float percent = (x1+x2+x3+x4+x5)/5;
  printf("The percentage of all : %f\n",percent);
  
  //2. find percentage of given 4 subjects
  
  float x1 = 33;
  float x2 = 31;
  float x3 = 39;
  float x4 = 36;
  float percent = ((x1+x2+x3+x4)/(4*40))*100;
  printf("The percentage of all : %f\n",percent);
  
  //3. find the simple inter(si)
  
  float p,r,t,si;
  p=100;
  r=10;
  t=2;
  si=(p*r*t)/100;
  printf("the si : %f\n",si);
  return 0;
}