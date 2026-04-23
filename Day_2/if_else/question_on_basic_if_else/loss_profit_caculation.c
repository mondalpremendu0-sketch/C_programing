#include <stdio.h>
int main() {
  
  //1. Calculate the loss and profit input taken from user
  int cost_price,sell_price,profit,loss;
  printf("Enter Cost Price of the item: ");
  scanf("%d",&cost_price);
  printf("Enter Selling Price of the item: ");
  scanf("%d",&sell_price);
  
  if(cost_price < sell_price){
    profit = sell_price - cost_price;
    printf("You got a profit of: %d\n",profit);
  }else{
    loss = cost_price - sell_price;
    printf("You got a loss of: %d\n",loss);
  }
  return 0;
}