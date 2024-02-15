#include <iostream>

using namespace std;

int main(){
    char blocks[3] = {'A','B','C'};
    char *ptr = &blocks[0];
    char temp;
    
    temp = blocks[0]; // statement 1: temp = A
    temp = *(blocks + 2); // statement 2: temp = C
    temp = *(ptr + 1); // statement 3: temp = B
    temp = *ptr; // statement 4: temp = A
    ptr = blocks + 1; // statement 5: *ptr = BC
    temp = *ptr; // statement 6: temp = B
    temp = *(ptr + 1); // statement 7: temp = C
    ptr = blocks; // statement 8: *ptr = ABC
    temp = *++ptr; // statement 9: temp = B
    temp = ++*ptr; // statement 10: temp = C
    temp = *ptr++; // statement 11: temp = C
    temp = *ptr; // statement 12: temp = C
    
    return 0;
}