#include <iostream>
using namespace std;

int main(){
    void cumulativeSum(int, int&);

    int num, sum = 0;
    
    while(true){
        cout << "Enter an integer (-1 to end): ";
        cin >> num;
        if(num == -1){
            break;
        }
        cumulativeSum(num, sum);
    }
    cout << "Total sum is " << sum;
}

void cumulativeSum(int num, int& sum){
    sum += num; 
    cout << "Add " << num << " to sum results in " << sum << endl; 
}