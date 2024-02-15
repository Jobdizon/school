#include <iostream>

using namespace std;

int main(){
    int hours, rate, salary;

    while (hours != -1){
        cout << "\nEnter hours worked (-1 to end): ";
        cin >> hours;
        cout << "Enter houry rate of the worker ($00.00) = ";
        cin >> rate;
        salary = hours * rate;
        cout << "Salary is $" << salary;
    }
    return 0;
}
    