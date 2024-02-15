#include <iostream>
#include "zip_code.h"
#include "zip_code.cpp"
using namespace std;

int main(){
	int code;
	cout << "Enter a zip or bar code: ";
	cin >> code;

	zipCode obj(code);

	cout << "zipcode: " << obj.getZip() << endl;
	cout << "barcode: " << obj.getBar() << endl;

	return 0;
}
//1010010100010101100001001


