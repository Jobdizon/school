#include <iostream>
using namespace std;

int main(){
    int s1, s2, hyp;

    for(s1 = 1; s1 <= 500; s1++){
        for(s2 = 1; s2 <= 500; s2++){
            for(hyp = 1; hyp <= 500; hyp++){
                if (s1 * s1 + s2 * s2 == hyp * hyp){
                    cout << s1 << " " << s2 << " " << hyp << " " <<
                    "is a Pythagorean triple" << endl;
                    }
            }
        }
    }
    return 0;
}