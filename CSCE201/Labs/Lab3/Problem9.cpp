#include <iostream>
using namespace std;

int main(){
    int num, factorial = 1;
    cout << "Enter a nonnegative integer to compute its factorial: " << endl;
    cin >> num;

    if (num > 0){
        for(int i = 1; i <= num; i++){
            factorial *= i;
        }
    }
    else{
        cout << "Not a valid integer, please enter a nonnegative integer";
    }
    cout << "The factorial for " << num << " is " << factorial;
    return 0;
}