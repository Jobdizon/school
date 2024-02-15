#include <iostream>

using namespace std;

int main(){
    double product1[3], product2[3];
    int salesperson = 3, products = 2,
        i, j, num, total1, total2;

    for(i = 0; i < salesperson; i++){
        cout << "Enter sales by salesperson " << i + 1 << " (product1 product2): ";
        cin >> product1[i];
        cin >> product2[i];
    }
    cout << "\t\tProduct 1  Product2\tTotal" << endl;
    for(i = 0; i < salesperson; i++){
        cout << "Salesperson " << i + 1 << "\t$" << product1[i] << ".00\t   $" << product2[i];
        cout << ".00\t$" << product1[i] + product2[i] << ".00" << endl; 
    }
    total1 = product1[0] + product1[1] + product1[2];
    total2 = product2[0] + product2[1] + product2[2];
    cout << "Total        \t$" << total1 << ".00\t   $" << total2 << ".00\t$" << total1 + total2 << ".00";
    return 0;
}   