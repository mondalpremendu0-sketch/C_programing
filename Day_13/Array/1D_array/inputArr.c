#include <stdio.h>
void printArray(int a[]){
  for (int i = 0; i < 5; i++) {
    printf("%d ",a[i]);
  }
}
int main (){
  int arr[5];
  for (int i = 0; i < 5; i++) {
    printf("Enter %d th elem: ",i);
    scanf("%d",&arr[i]);
  }
  printArray(arr);
  return 0;
}