#include <stdio.h>

int main() {
    int score;
    char grade;

    // Step 1: Input
    printf("Enter your score (0 - 100): ");
    scanf("%d", &score);

    // Step 2: Eligibility Check - valid range
    if (score < 0 || score > 100) {
        printf("Invalid score. Please enter between 0 and 100.\n");
        return 0;   // program અહીં જ બંધ થઈ જશે
    }

    // Step 3: Grade Calculation using switch
    switch (score / 10) {
        case 10:  // 100
        case 9:   // 90-99
            grade = 'A';
            break;
        case 8:   // 80-89
            grade = 'B';
            break;
        case 7:   // 70-79
            grade = 'C';
            break;
        case 6:   
            grade = 'D';
            break;
        default:  
            grade = 'F';
    }

    printf("Your grade is %c.\n", grade);

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        printf("Congratulations! You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

    return 0;
}
