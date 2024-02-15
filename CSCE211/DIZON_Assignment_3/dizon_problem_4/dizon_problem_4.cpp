//Benford's Law Re-visted
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int num;
    int counter[9] = {0};
    ifstream myFile("enrollments.txt");

    // reads the numbers from myFile
    while(myFile >> num){
            if (num > 0 && num < 10) {
                    counter[num - 1]++;
            }
    }

    myFile.close();

    for(int i = 1; i <= 9; i++) {
        cout << "Number \"" << i << "\" has " << counter[i - 1] << " counts." << endl;
    }
    return 0;

}