#include <iostream>
using namespace std;

class InterestCalculator{
    public:
        InterestCalculator(double x, double y){
            //makes private members accessible
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
        //calculates the interest
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

int main(){
    //driver program
    InterestCalculator interest(1.50, 100.00);
    interest.printInterest();

    return 0;
}
