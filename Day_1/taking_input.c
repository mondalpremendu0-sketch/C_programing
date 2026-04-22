#include <stdio.h>
int main (){
  //----Taking Input From User---+---
  
  float radius,pi,area;
  printf("Enter Your radius: ");
  scanf("%f",&radius);//"&" for memory location
  pi = 3.1415;
  area = pi * radius * radius;
  printf("The calculated area: %f\n",area);
  
  
  //simple interest 
  float p,r,t,si;
  printf("Enter rate (r): ");
  scanf("%f",&r);
  printf("Enter time (t): ");
  scanf("%f",&t);
  p=100;
  si=(p*r*t)/100;
  printf("the si(p*r*t/100) : %f\n",si);
  
  
  //Adding tow numbers
  
  int x,y;
  printf("Enter 1st number: ");
  scanf("%d",&x);
  printf("Enter 2nd number: ");
  scanf("%d",&y);
  printf("Sum of numbers: %d\n",x+y);
  
  //print 2nums
  
  int p,q;
  printf("Enter values of p and q: ");
  scanf(" %d %d",&p,&q);
  printf("p = %d q = %d\n",p,q);
  
  //find remainder
  
  int x,y,rem;
  printf("Enter 1st and 2nd number: ");
  scanf(" %d %d",&x,&y);
  rem = x % y;
  printf("The remainder: %d\n", rem);
  
  return 0;
}