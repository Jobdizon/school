#include <iostream>

using namespace std;

int main(){
    for(int i = 1; i <= 5; i++){ /*For the first nested, the loop will iterate 5 times*/
        for(int j = 1; j <=3; j++){ /*Since there's no statement for the first nested, the loop
        will iterate 15 times since 5 times 3 is 15*/
            for(int k = 1; k <= 4; k++){ /*The asterisk character will print 4 times in row
            and will print 4 asterisks for 15 times*/
                cout << '*';
            cout << endl;/*This sections every 4 asterisk*/
            }
            cout << endl;
        }
    }
    return 0;
}