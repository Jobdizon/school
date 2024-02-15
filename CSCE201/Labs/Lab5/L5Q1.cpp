#include <iostream>

using namespace std;

int main(){
    int value = 123, *valuePtr;
    valuePtr = &value;
    
    cout << "i = " << value << endl;
    cout << "&i = " << valuePtr << endl;
    cout << "ptr = " << valuePtr << endl;
    cout << "&ptr = " << &valuePtr << endl;
    cout << "*ptr = " << *valuePtr << endl;

    return 0;
}