#include <iostream>
#include <cmath>
using namespace std;

float calculateLog(float value){
    if(value < 0.0)
        throw 1;
    float result;
    result = log10(value);
    return result;
}

int main(){
    try{
        float num = -1.0;
        calculateLog(num);
    }
    catch(int i){
        cout << "Exception occured, use only postive numbers" << endl;
    }
    cout << "End of program" << endl;

    return 0;
}