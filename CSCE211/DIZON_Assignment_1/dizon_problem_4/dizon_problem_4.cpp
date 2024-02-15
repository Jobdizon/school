#include <iostream>
#include <ctime>

using namespace std;

int randnum(){
	return rand() % 99 + 1;
}

void change(int num, int &quarters, int &dimes, int &nickels, int &pennies){
	quarters = num / 25;
	num %= 25;
	dimes = num / 10;
	num %= 10;
	nickels = num / 5;
	pennies = num % 5;
}

int main(){
	srand(time(0));
	
	int num = randnum();
	int quarters, dimes, nickels, pennies;
	change(num, quarters, dimes, nickels, pennies);

	cout << "Change need for: " << num << endl;
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickels: " << nickels << endl;
	cout << "Pennies: " << pennies << endl;

	return 0;
}
