#include <stdio.h>

int main() {
    int basic_salary;
    char grade;

    // Input basic salary and grade
    printf("Enter basic salary: ");
    scanf("%d", &basic_salary);
    printf("Enter grade (A/B/C): ");
    scanf(" %c", &grade);

    // Calculate hra, da, pf
    double hra = 0.2 * basic_salary;
    double da = 0.5 * basic_salary;
    double pf = 0.11 * basic_salary;

    // Calculate allowance based on grade
    double allowance;
    switch (grade) {
        case 'A':
            allowance = 1700;
            break;
        case 'B':
            allowance = 1500;
            break;
        default:
            allowance = 1300;
    }

    // Calculate total salary
    double total_salary = basic_salary + hra + da + allowance - pf;

    // Round off and print integral part
    printf("Total salary: %d\n", (int) (total_salary + 0.5));

    return 0;
}
