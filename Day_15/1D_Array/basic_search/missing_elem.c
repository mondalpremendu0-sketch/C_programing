#include <stdio.h>

int SumOfgivenAreay(int arr[],int size){
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main (){
  int arr[5] = {1,2,3,5};
  int size = 4,n=5;
  int sumOfNnum = n * (n + 1)/2;
  int missingNum = sumOfNnum - SumOfgivenAreay(arr,size);
  printf("Missing number: %d\n",missingNum);
  return 0;
}