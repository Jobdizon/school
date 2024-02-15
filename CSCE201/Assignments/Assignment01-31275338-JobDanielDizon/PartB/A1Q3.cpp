#include <iostream>

using namespace std;

int main(){
    int ratings[10], freq[50], count;
    int i, j;
    cout << "Enter the 10 responses: " << endl;

    for(i = 0; i < 10; i++){
        if (ratings[i] < 1 && ratings[i] > 3){
            cout << "Invalid number";
            break;
        }
    }
    for(i = 0; i < 10; i++){
        cin >> ratings[i];
    }
    cout << "Ratings\tFrequencies" << endl;
    for(i = 0; i < 10; i++){
        count = 1;
        for(j = i + 1; j < 10; j++){
            if(ratings[i] == ratings[j]){
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0){
            freq[i] = count;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            cout << ratings[i] << "\t" << freq[i] << endl;
        }
    } 
    return 0;
}