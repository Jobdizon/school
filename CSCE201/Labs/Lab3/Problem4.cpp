/*Write a program that reads an integer and then displays the number that has the same digits in
the reverse order, as illustrated by this sample run:
*/
#include <iostream>

using namespace std;

int main(){
    int n, r = 0;

    cout << "This program reverses the digits in an integer." << endl;
    cout << "Enter a positive integer: ";
    cin >> n;

    while (n > 0){
        r = r * 10 + n % 10;
        n /= 10;
    }
    cout << r;
    return 0;

}