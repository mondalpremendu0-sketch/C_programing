#include <stdio.h>
int main() {
    // int marks;
    // printf("Enter marks: ");
    // scanf("%d", &marks);

    // if (marks >= 90) printf("O");
    // else if (marks >= 80) printf("E");
    // else if (marks >= 70) printf("A");
    // else if (marks >= 60) printf("B");
    // else if (marks >= 50) printf("C");
    // else if (marks >= 40) printf("D");
    // else printf("F");
    

    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 10:
        case 9: printf("O"); break;
        case 8: printf("E"); break;
        case 7: printf("A"); break;
        case 6: printf("B"); break;
        case 5: printf("C"); break;
        case 4: printf("D"); break;
        default: printf("F");
}
    return 0;
}