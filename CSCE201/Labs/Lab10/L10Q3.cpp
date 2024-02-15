#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    try // outer try-catch block
    {
        try // inner try-catch block
        {
            throw a; // throw exception a
        }
        catch(int i) // catch exception from throw a
        {
            cout << "\nException in inner try-catch block.";
            throw i; // re-throw exception from inner
                    // try-catch block
        }
    }
    catch(int j) //catch the exception re-thrown by throw i
    {
        cout << "\nException in outer try-catch block.";
    }
    cout << "End of program." << endl;
    
    return 0;
}
