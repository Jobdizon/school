#include <iostream>
#include "CheckedArray.cpp"
using namespace std;

int main() {
    CheckedArray<int> arr(5);

    try 
    {
        arr[6] = 10; // This should throw ArrayOutOfRange exception
    } 
    catch(const ArrayOutOfRange<int>& ex) 
    {
        cout << ex.what() << " at index: " << ex.index << endl;
    }

    return 0;
}
