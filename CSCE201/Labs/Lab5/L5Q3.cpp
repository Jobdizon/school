#include <iostream>

using namespace std;

int main(){
    char str[] = "char *c = \"string\" declare a pointer to a constant character array so c is actually read-only char c[] = \"string\" however is modifiable.";
    char *ptr = &str[0];

    for(int i = 0; i < 137; i++){
        cout << *(ptr + i);
        if(*(ptr + i) == ' '){
            cout << endl;
        }
    }  
    return 0;  
}         
    


