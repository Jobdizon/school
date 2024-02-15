#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream ifstreamFile;
    //Impelemented a text file since string was too large
    ifstreamFile.open("nst.txt");

    char text[500];
    char words;

    if(ifstreamFile.is_open()){
        int i = 0;
        ifstreamFile >> noskipws; 
        while(ifstreamFile >> words){
            text[i++] = words;
        }
    }
    char *ptr = &text[0];
    
    string delstring = "US$", word, stringText = string(text);
    
    
    stringText.replace(stringText.find(delstring), delstring.length(), "MYR");
    //not outputting a the replaced string
    cout << stringText;
    

    ifstreamFile.close();

    return 0;
}