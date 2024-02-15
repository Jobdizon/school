/*Write a program that reads in a list of integers from the user until the user enters the value 0 as
a sentinel. When the sentinel appears, your program should display the largest value in the list,
as illustrated in the following sample run:
*/
#include <iostream>

using namespace std;

int main(){
    int n, maxValue = 0;
    
    cout << "This program finds the larges integer in a list." << endl;
    cout << "Enter 0 to signal the end of the list." << endl;
    
    while (n != 0)
    {
        cout << "? ";
        cin >> n;
        
        if (maxValue < n){
            maxValue = n;
        }

    }
    cout << "The largest value was " << maxValue;
    return 0;
}