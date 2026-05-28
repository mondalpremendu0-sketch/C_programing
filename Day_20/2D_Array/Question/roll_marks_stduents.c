#include <stdio.h>
int main(){
  int no_of_student,subjects;
  
  printf("Enter no of students: ");
  scanf("%d",&no_of_student);
  
  printf("Enter how many subjects: ");
  scanf("%d",&subjects);
  
  int arr[no_of_student][subjects+1];
  
  for (int i = 0; i < no_of_student; i++)
  {
    printf("Enter (roll,P,C,M marks): ");
    for (int j = 0; j <= subjects; j++) 
    {
      scanf("%d",&arr[i][j]);
    }
  }
  
  printf("The output of your result: \n");
  
  for (int i = 0; i < no_of_student; i++)
  {
    for (int j = 0; j <= subjects; j++) 
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}