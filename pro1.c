#include <stdio.h>

int main() {
    int mark;
    char grade;

    printf("Enter your score : ");
    if (scanf("%d", &mark) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 0; 
    }
    if (mark<0 || mark > 100) {
        printf("Score out of range. Please enter between 0 and 100.\n");
        return 0;
    }
    grade = (mark >= 90) ? 'A' :
            (mark >= 80) ? 'B' :
            (mark >= 70) ? 'C' :
            (mark >= 60) ? 'D' :
            (mark >= 50) ? 'E' : 'F';

    printf("Your grade is %c\n", grade);

    return 0;
}
