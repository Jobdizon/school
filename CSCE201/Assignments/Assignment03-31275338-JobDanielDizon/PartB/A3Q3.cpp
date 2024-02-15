#include <iostream>
using namespace std;

double RetailPrice(double, double);

int main(){
    double s1, s2;

    cout << "Enter the product's wholesale cost: ";
    cin >> s1;
    cout << "Enter the product's markup percentage (e. g. 15.0): ";
    cin >> s2;
    RetailPrice(s1, s2);
}

double RetailPrice(double s1, double s2){
     double sale = s1 * (s2 / 100);
     double price = s1 + sale;
     cout << "The retail price is $" << price; //not outputting another zero
     return price; 
}   

