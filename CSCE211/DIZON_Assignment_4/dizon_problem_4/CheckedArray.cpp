#include <iostream>
#include "CheckedArray.h"
using namespace std;

template<class T>
CheckedArray<T>::CheckedArray()
{
}

template<class T>
CheckedArray<T>::CheckedArray(int size) : size(size)
{
    p = new T[size];
};

template<class T>
CheckedArray<T>::~CheckedArray()
{
    delete[] p; // Frees memory
};

template<class T>
int CheckedArray<T>::length()
{
    return size;
};

// Checks if index is in range of array
template<class T>
T& CheckedArray<T>::operator[](int index) noexcept(false)
{
    if (index < 0 || index >= size)
    {
        throw ArrayOutOfRange<int>(index);
    }

    return p[index];
};

int main() {
    CheckedArray<int> arr(5);

    try 
    {
        arr[6] = 10; // This should throw ArrayOutOfRange exception
    } 
    catch(const ArrayOutOfRange<int>& ex) 
    {
        cout << ex.what() << " at index: " << ex.index << endl;
    }

    return 0;
}

