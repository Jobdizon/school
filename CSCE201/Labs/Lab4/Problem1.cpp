#include <iostream>
#include <string.h>


using namespace std;


int main(){
    char word1[10], word2[10];
    int array1[26] = {0}, array2[26] = {0};
    cout << "Enter word 1: ";
    cin >> word1;
    cout << "Enter word 2: ";
    cin >> word2;
   
    if (strlen(word1) != strlen(word2)){
        cout << "Words are not anagrams" << endl;
        return 0;
    }


    for (int i = 0; i < strlen(word1); i++) {
        array1[word1[i] - 'a']++;
    }


    for (int i = 0; i < strlen(word2); i++) {
        array2[word2[i] - 'a']++;
    }


    for (int i = 0; i < 26; i++){
        if (array1[i] != array2[i]){
            cout << "Words are not anagrams" << endl;
            break;
        }
    }
    cout << "Words are anagrams";
    return 0;
}
