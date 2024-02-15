#include <iostream> 
using namespace std;

int power(int base, int exponent);

int main(){
    int num, expo;
    
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a exponent: ";
    cin >> expo;

    int f = power(num, expo);
    cout << f;

    return 0;
}

int power(int base, int exponent){
    int num = 1;
    for(int i = 0; i < exponent; i++){
        num *= base;
    }
    return num;
}
