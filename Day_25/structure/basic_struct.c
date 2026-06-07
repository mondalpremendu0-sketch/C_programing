#include <stdio.h>
int main(){
  struct pokemon {
    int hp;
    int attack;
    int speed;
  }picachu,charisad;
  
  //struct pokemon picachu;
  picachu.hp = 50;
  printf("Enter picachu hp: ");
  scanf("%d",&picachu.hp);
  picachu.attack = 70;
  picachu.speed = 100;
  
  //struct pokemon charisad;
  charisad.hp = 80;
  charisad.attack = 150;
  charisad.speed = 70;
  
  printf("%d\n",picachu.hp);
  
  return 0;
}