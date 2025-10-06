#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid score. Please enter between 0 and 100.\n");
        return 0;
    }

    
    switch (score / 10) {
        case 10:   
        case 9:   
            grade = 'A';
            break;
        case 8:    
            grade = 'B';
            break;
        case 7:    
            grade = 'C';
            break;
        case 6:    
            grade = 'D';
            break;
        default:   
            grade = 'F';
    }
    printf("Your grade is %c\n", grade);
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done!\n");
            break;
        case 'C':
            printf("Good job!\n");
            break;
        case 'D':
            printf("You passed, but you could do better.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;
}
