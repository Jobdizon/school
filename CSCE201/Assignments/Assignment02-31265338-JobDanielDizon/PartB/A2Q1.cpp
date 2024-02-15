/*Write a program to accept 5 integer values from keyboard. The 5 values should
be stored in an array using a pointer. Then print the elements of the array (such
as a[i]) on the screen.
*/
#include <iostream>

using namespace std;

int main(){
    int array[5];
    int *ptr;

    ptr = &array[0];

    cout << "Enter 5 integer values: " << endl;
    
    for(int i = 0; i < 5; i++){//stores the five integers in array
        cin >> ptr[i];
    }

    for(int i = 0; i < 5; i++){
        cout << array[i] << " ";
    }
    return 0;
}