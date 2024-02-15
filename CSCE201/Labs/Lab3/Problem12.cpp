#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 1){
        if (num % 2 == 1){
            num = num * 3 + 1;
            cout << num << " is odd, so I multiply 3 and add 1 to get " << num << endl;
        }
        else{
            num = num / 2;
            cout << num << " is even, so I divide it by 2 to get " << num << endl;
        }

    }
    return 0;
}