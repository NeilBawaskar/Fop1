#include <stdio.h>
int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;
    printf("Enter marks for 5 courses (assuming out of 100):\n");
    printf("Course 1: ");
    scanf("%f", &m1);
    printf("Course 2: ");
    scanf("%f", &m2);
    printf("Course 3: ");
    scanf("%f", &m3);
    printf("Course 4: ");
    scanf("%f", &m4);
    printf("Course 5: ");
    scanf("%f", &m5);
    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40) {
        printf("\n--- Result ---\n");
        printf("Status: PASS\n");
        total = m1 + m2 + m3 + m4 + m5;
        percentage = (total / 500.0) * 100; 
        printf("Total Marks: %.2f / 500.00\n", total);
        printf("Aggregate Percentage: %.2f%%\n", percentage);

        if (percentage >= 75) {
            printf("Grade: Distinction\n");
        } 
        else if (percentage >= 60 && percentage < 75) {
            printf("Grade: First Division\n");
        } 
        else if (percentage >= 50 && percentage < 60) {
            printf("Grade: Second Division\n");
        } 
        else if (percentage >= 40 && percentage < 50) {
            printf("Grade: Third Division\n");
        }
        
    } else {
        printf("\n--- Result ---\n");
        printf("Status: FAIL\n");
        printf("Note: Student scored less than 40 marks in one or more courses.\n");
    }

    return 0;
}
