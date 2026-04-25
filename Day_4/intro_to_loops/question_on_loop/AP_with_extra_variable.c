#include <stdio.h>
int main(){
 // AP = 1,3,5,7,....upto n terms
    int n;
    printf("Enter nth term: ");
    scanf("%d",&n);
    int a = 1;
    for(int i = 1;i <= n; i++){
      printf("%d ",a);
      a = a + 2;
    }

//AP = 4,7,10.....upto n term
    int b = 4;
   for(int i = 1;i <= n; i++){
    printf("%d ",b);
    b = b + 3;
  }
  return 0;
}