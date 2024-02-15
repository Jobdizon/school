#include <iostream>

using namespace std;

int main(){
    int array[6] = {0, 1, 2, 3, 4, 5},
        *ptr, i;
    ptr = array;
    for(i = 0; i < 6; i++){
        cout << "*(ptr + " << i << ") = " << *(ptr + i) << endl;
    }
    return 0;
} 