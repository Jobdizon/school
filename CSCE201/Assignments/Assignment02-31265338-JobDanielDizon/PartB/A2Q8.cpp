#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream ifstreamFile;
    ifstreamFile.open("nst.txt");//Impelemented a text file since string was too large

    char text[500];
    char words;

    if(ifstreamFile.is_open()){
        int i = 0;
        ifstreamFile >> noskipws; //The positions were off since there was no whitespaces
        while(ifstreamFile >> words){
            text[i++] = words;
        }
    }
    char *ptr = &text[0];
    
    for(int i = 0; i < 500; i++){
        if(*(ptr + i) == 'U' && *((ptr + i) + 1) == 'S' && *((ptr + i) + 2) == '$'){
            cout << "Located string \"US$\" at position " << i << " to " << i + 2 << endl;
            continue;
        }
    }
    ifstreamFile.close();
    
    return 0;
} 