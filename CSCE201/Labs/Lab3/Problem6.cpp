#include <iostream>

using namespace std;

int main(){
    int n, n1, n2, n3, n4, n5;
    
    cout << "Enter a five-digit palindrome: ";
    cin >> n;

    n5 = n % 10;
    n /= 10;
    n4 = n % 10;
    n /= 10;
    n3 = n % 10;
    n /= 10;
    n2 = n % 10;
    n /= 10;
    n1 = n % 10; 

    if (n1 == n5 && n2 == n4) {
      cout << "Valid palindrome" << endl;
   } else {
      cout << "Invalid palindrome" << endl;
   }
   return 0;
}