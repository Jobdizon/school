#include <iostream>
#include <string>
using namespace std;

class Movie{
    public:
        Movie(string n = "Unknown", string mpaa = "Nonrated")
        { // Intializes 
            name = n;
            MPAA = mpaa;
        }
        //Getters
        string getName()
        {
            return name;
        }
        string getMPAA()
        {
            return MPAA;
        }
        //Swaps movies in name-sorted order
        void swap(Movie &a, Movie &b) 
        {
            Movie temp = a;
            a = b;
            b = temp;
        }
        
        void bubbleSort(Movie arr[], int n) 
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    if (arr[j].getName() > arr[j + 1].getName()){
                        swap(arr[j], arr[j + 1]);
                    }
                }
            }
        }
    private:
        string name, MPAA;
        
};


int main() {
    Movie arr[] = {
        Movie("Black Panther", "PG-13"),
        Movie("Avengers: Infinity War", "PG-13"),
        Movie("A Wrinkle In Time", "PG"),
        Movie("Ready Player One", "PG-13"),
        Movie("Red Sparrow", "R"),
        Movie("The Incredibles 2", "G")
    };
    int elements = 6;
    
    Movie film("Unknown", "Nonrated");

    film.bubbleSort(arr, elements);

    for (int i = 0; i < elements; i++) 
    {
        cout << arr[i].getName() << " (" << arr[i].getMPAA() << ")" << endl;
    }

    return 0;
}