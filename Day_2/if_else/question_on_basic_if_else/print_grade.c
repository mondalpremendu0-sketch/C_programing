#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90) printf("O");
    else if (marks >= 80) printf("E");
    else if (marks >= 70) printf("A");
    else if (marks >= 60) printf("B");
    else if (marks >= 50) printf("C");
    else if (marks >= 40) printf("D");
    else printf("F");

    return 0;
}