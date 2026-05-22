#include <stdio.h>
#include <stdbool.h>
void printArray(int arr[]){
  for (int i = 0; i < 5; i++) {
    /* code */
    printf("%d ",arr[i]);
  }
}
int main (){
  int arr[5] = {2,3,1,2,3};
  for (int i = 0; i < 5; i++) {
    bool flag = false;
    for (int j = i+1; j < 5; j++) {
      if(arr[i] == arr[j]){
        flag = true;
      }
    }
    if(flag == false) {
      printf("unique element: %d at index  : %d\n",arr[i],i);
      break;
    }
  }
  return 0;
}