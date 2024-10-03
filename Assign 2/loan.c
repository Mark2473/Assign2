#include <stdio.h>

// Function to check loan qualification
void check_loan_qualification(int age, double income) {
    if (age >= 18 && age <= 65) {
        if (income >= 25000) {
            printf("You qualify for the loan.\n");
        } else {
            printf("You do not qualify for the loan due to insufficient income.\n");
        }
    } else {
        printf("You do not qualify for the loan due to age restrictions.\n");
    }
}

int main() {
    int age;
    double income;

    // Input age and income
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income: ");
    scanf("%lf", &income);

    // Check loan qualification
    check_loan_qualification(age, income);

    return 0;
}