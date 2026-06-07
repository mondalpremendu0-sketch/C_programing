#include <stdio.h>
int main(){
  struct pokemon {
    int hp;
    int attack;
    int speed;
  };
  
  struct pokemon picachu;
  picachu.hp = 50;
  picachu.attack = 70;
  picachu.speed = 100;
  
  struct pokemon charisad;
  picachu.hp = 80;
  picachu.attack = 150;
  picachu.speed = 70;
  
  return 0;
}