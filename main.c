#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables for inputs and calculations
    double annual_salary, monthly_income, housing_expenses, car_expenses;
    double grocery_expenses, utility_expenses, monthly_leftover;
    double monthly_payment, loan_amount;

    // Constants for interest rate and loan term
    const double annual_interest_rate = 0.03;
    const double monthly_interest_rate = annual_interest_rate / 12;
    const int loan_term_months = 120;

    // User prompts for financial details
    printf("Welcome! Let's calculate your maximum loan amount\n");
    printf("Please enter the following:\n");
    printf("Annual Salary: $");
    scanf("%lf", &annual_salary);

    monthly_income = annual_salary / 12; // Calculate monthly income

    printf("Monthly Housing Expenses: $");
    scanf("%lf", &housing_expenses);

    printf("Monthly Car Expenses: $");
    scanf("%lf", &car_expenses);

    printf("Monthly Grocery Expenses: $");
    scanf("%lf", &grocery_expenses);

    printf("Monthly Utility Expenses: $");
    scanf("%lf", &utility_expenses);

    monthly_leftover = monthly_income - (housing_expenses + car_expenses + grocery_expenses + utility_expenses);

    monthly_payment = 0.10 * monthly_leftover;

    loan_amount = (monthly_payment / monthly_interest_rate) * 
                  (1 - (1 / pow(1 + monthly_interest_rate, loan_term_months)));
    // Display results
    printf("Calculating...\n");
    printf("Your monthly payment is: $%.2f\n", monthly_payment);
    printf("Maximum Loan Amount: $%.0f\n", loan_amount);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}
