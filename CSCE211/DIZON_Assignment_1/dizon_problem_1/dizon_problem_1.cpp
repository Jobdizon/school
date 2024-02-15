#include <iostream>

using namespace std;

int main(){
    int num;
    int counter[9] = {0};
    while (cin >> num){
            if (num > 0 && num < 10) {
                    counter[num - 1]++;
            }
    }
    for (int i = 1; i <= 9; i++) {
            cout << "Number \"" << i << "\" has " << counter[i - 1] << " counts." << endl;
    }
    return 0;

}

