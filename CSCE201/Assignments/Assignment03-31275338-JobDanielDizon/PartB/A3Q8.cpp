#include <iostream>
#include <cstring> 
#include <cctype> 
using namespace std;

void convertString(char s1[], char s2[], int n); 
void printString(char *s, int n); 

int main()
{
    char s1[100]; 
    char s2[100]; 
    int n; 
    
    cout << "Enter a string: ";
    cin.getline(s1, 100);
    
    n = strlen(s1); 
    convertString(s1, s2, n); 
    printString(s2, n); 
    
    return 0;
}

void convertString(char s1[], char s2[], int n){
    for(int i = 0; i < n; i++){
        if(isalnum(s1[i])){
            s2[i] = toupper(s1[i]);
        }
    }
}

void printString(char *s, int n){
    for(int i = 0; i < n; i++){
        cout << s[i];
    }
}