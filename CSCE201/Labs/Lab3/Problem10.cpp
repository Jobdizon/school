#include <iostream>
using namespace std;

int main(){
    float total = 0;
    int choice;

    do{
        cout << "Enter product number (-1 to checkout): " << endl;
        cin >> choice;
        switch(choice){
            case 1:
            total += 2.90;
            cout << "Total purchase: $" << total << endl;
            break;
            case 2:
            total += 3.50;
            cout << "Total purchase: $" << total << endl;
            break;
            case 3:
            total += 5.00;
            cout << "Total purchase: $" << total << endl;
            break;
            case 4:
            total += 6.90;
            cout << "Total purchase: $" << total << endl; 
            break;
        }
    }while(choice != -1);
    return 0;
}