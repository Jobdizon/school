#include <iostream>
#include <iomanip>
#include <cmath> //needed pow() function for monthly calculation
using namespace std;

class InterestCalculator{
    public:
        InterestCalculator(double x, double y){
            rate = x;
            amount = y;
        };
        void setRate(){
            //tests the validity of input
            if (rate < 0.0){
                rate = 1.0;
            }
        }
        double getRate(){
            //if valid, it returns
            return rate;
        }
        void printInterest(){
            double interest;
            interest = (rate / 100) * (amount);
            cout << "Principal Amount: " << amount << endl;
            cout << "Interest Rate: " << rate << endl;
            cout << "Interest: " << interest;
        }
    //Derived class can access
    protected:
        double rate, amount;
};
//inheritance
class LoanCalculator : public InterestCalculator{
    public:
        LoanCalculator(double x, double y, int z) : InterestCalculator(x, y){
            loanYears = z;
            //validates the rate & amount
            if(rate == 0.0){
                rate = 1.0;
            }
            if(amount == 0.0){
                cout << "No loan needed\n";
            }
            };
        //variables sent to global
        int numMonths = 0;
        double balance = 0;
        double monthlyRate = 0;
        // calculates the monthly payment
        void MonthlyPayment(){ 
            cout << "Month\tPayments($)\tPrincipal($)\tInterest($)\tTotal Interest($)\tBalance($)\n";
            numMonths = loanYears * 12;
            monthlyRate = rate / (100 * 12);
            balance = amount;
            //for loop through each month
            for (int month = 1; month <= numMonths; month++){
                double Monthly = amount * (monthlyRate / (1 - pow(1 + monthlyRate, -numMonths)));
                double interest = balance * monthlyRate;
                double totalInterest = totalInterest + interest;
                double principal = Monthly - interest;
                balance -= principal;
                
                cout << month << "\t" << fixed << setprecision(2) << Monthly << "\t\t" << principal << "\t\t" << interest << "\t\t" << totalInterest << "\t\t\t" << balance << "\n";
            }
        };

    private:
        int loanYears;
        
};

int main(){
    //driver program
    double amount, interest, years;

    cout << "Enter loan amount (USD): ";
    cin >> amount;
    cout << "Enter annual interest rate (%): ";
    cin >> interest;
    cout << "Enter loan term in years: ";
    cin >> years;
    //created an object "loan"
    LoanCalculator loan(interest, amount, years);
    loan.MonthlyPayment();

    return 0;
}