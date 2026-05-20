#include <stdio.h>
void printArray(int a[]){
  for (int i = 0; i < 10; i++) {
    printf("%d ",a[i]);
  }
}
int main (){
  int arr[10] = {12,34,35,67,7,40,42,50,59,2};
  for (int i = 0; i < 10; i++) {
    if(arr[i] > 35) printf("%d ",i);
  }
  printf("\n");
  printArray(arr);
  return 0;
}