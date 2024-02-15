/*Write a program that reads in a positive integer N and then calculates and displays the sum of
the first N odd integers. For example, if N is 4, your program should display the value 16, which
is 1 + 3 + 5 + 7*/

#include <iostream>

using namespace std;

int main(){
    int N, increment;
    int value = 0;
    
    cout << "Enter a number: " << endl;
    cin >> N;
   
    for (increment = 1; increment <= N; increment++){
        value += 2 * increment - 1;
    }
    cout << value;
    return 0;
}