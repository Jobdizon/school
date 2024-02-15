#include <iostream>
using namespace std;

int main(){
    int arr[] = {0, 1, 2, 3, 4};
    try {
        for(int i = 0; i < 6; i++)
        {
            if(i > 4)
                throw "Array out of range exception.";
            cout << arr[i] << "\n";
        }
    }
    catch(char exception) {
        cout << "Integers only" << endl;
    }

    cout << "End of program." << endl;
    return 0;
}