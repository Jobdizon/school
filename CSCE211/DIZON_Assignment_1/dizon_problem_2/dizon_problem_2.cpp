#include <iostream>
#include <ctime>

using namespace std;

int dice(){
	return rand() % 6 + 1;
}

int main(){
	srand(time(0));

	int amount = 100;
	int wager;
	int num;
	while(amount > 0){
		cout << "Enter a wager: ";
		cin >> wager;
		cout << "Enter number from (1-6): ";
		cin >> num;
		
		if(wager == 0){
			cout << "Your balance is $" << amount << endl;
			break;
		}
		if(num < 1 || num > 6){
			cout << "Invalid number" << endl;
			continue;
		}
		if(wager > amount || wager <= 0){
			cout << "Invalid wager"  << endl;
			continue;
		}

		int result1 = dice();
		int result2 = dice();
		int result3 = dice();

		if(result1 != num && result2 != num && result3 != num){
			cout << "No matches. You lost $" <<  wager << endl;
			amount -= wager;
			cout << "You have $" << amount << endl;
		}else{

			int multiplier = 0;
			if(result1 == num){
				multiplier++;
			}
			if(result2 == num){
                		multiplier++;
        		}
			if(result3 == num){ 
				multiplier++;
        		}

			int winnings = (wager * multiplier);
			amount += winnings;
			cout << "You won $" << winnings << endl;

			char answer;
			cout << "Play again?(y/n): ";
			cin >> answer;
			if(answer != 'y' && answer != 'Y'){
				break;
			} 
		}
	}
	cout << "Game over. You have $" << amount << " remaining." << endl;

	return 0;
}



