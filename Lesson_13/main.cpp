#include <iostream>
#include <cmath>
#include <iomanip>
#include "divisor.h"
#include "multiplier.h"
#include "globals.h"


using namespace std;


enum AmortizeProgram {
    kLoanPrincipal = 1,
    kInterestRate = 2,
    kYearsOfLoan = 3
};

enum AmortEnum {
    kYearOut = 2,
    kMinOut = 2,
    kCumMinOut = 5,
    kPaymentOut = 12,
    kInterestOut = 12,
    kPrincipalOut = 12,
    kBalanceOut = 16
};

int main(int argc, char *argv[]) {

    double principal = 0.0;
    double human_interest = 0.0;
    int years_of_loan = 0;

    if(argc == 1) {
        cout << "Enter the principal amount: ";
        cin >> principal;

        cout << "Enter the interest rate: ";
        cin >> human_interest;

        cout << "Enter years of loan: ";
        cin >> years_of_loan;
    } else {
        // atof interprets string as floating point and returns value as double 
        // https://www.programiz.com/cpp-programming/library-function/cstdlib/atof
        principal = atof(argv[kLoanPrincipal]);
        human_interest = atof(argv[kInterestRate]);
        // atoi turns string to int
        years_of_loan = atoi(argv[kYearsOfLoan]);
    }

    cout << "Loan principal: " << principal << endl;
    cout << "Interest rate " << human_interest << endl;
    cout << "Time period " << years_of_loan << " year(s)" << endl;

    double interest = divisor(human_interest, kPercentDenominator);
    double month_interest =  divisor(interest, kMonthsInYear);
    long months_of_loan = multiplier(years_of_loan, kMonthsInYear);

    double payment = 0.0;
    payment = principal * (month_interest / (1 - (pow(1 + month_interest, - months_of_loan))));

    cout << "Payment: " << setiosflags(ios::fixed) << setprecision(2) << payment << endl;

   double curr_interest_payment = 0.0;
   double curr_principal_payment = 0.0;
   double curr_balance = 0.0;

   curr_balance = principal;

   long curr_loan_month = 1;

   int year = 1;
   int switch_year = 0;
   int year_month = 1;

   while(curr_loan_month <= months_of_loan) {
    AmortizeMonth amort_month;

    curr_interest_payment = curr_balance * month_interest;
    curr_principal_payment = payment - curr_interest_payment;
    curr_balance = curr_balance - curr_principal_payment;

    amort_month.year = year;
    amort_month.year_month = year_month;
    amort_month.loan_month = curr_loan_month;
    amort_month.payment = payment;
    amort_month.pure_interest = curr_interest_payment;
    amort_month.paid_down_principal = curr_principal_payment;
    amort_month.principal_balance = curr_balance;


    cout <<
        setw(kYearOut) << amort_month.year << " " <<
        setw(kMinOut) << amort_month.year_month << " " <<
        setw(kCumMinOut) << amort_month.loan_month << " " <<
        setw(kPaymentOut) << amort_month.payment << " " <<
        setw(kInterestOut) << amort_month.pure_interest << " " <<
        setw(kPrincipalOut) << amort_month.paid_down_principal << " " <<
        setw(kBalanceOut) << amort_month.principal_balance << " " << 
        endl;

    year_month++;
    if(year_month > kMonthsInYear) {
        year_month = 1;
        year++;
    }

    curr_loan_month++;
   }

    cout << "Loan payments complete." << endl;

    return 0;
}