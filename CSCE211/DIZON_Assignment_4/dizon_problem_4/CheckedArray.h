// Definition of exception class
template<class T>
class ArrayOutOfRange : public exception
{
public:
    int index;
    ArrayOutOfRange(int index) // Constructor, initializes index
    {
        this->index;
    };
    const char * what() const noexcept
    {
        return "ArrayOutOfRange Exception";
    }
};

// Definition of checking an array class
template<class T>
class CheckedArray
{
public:
    CheckedArray();
    CheckedArray(int size);
    ~CheckedArray();
    T& operator[](int index) noexcept(false);
    int length();
private:
    T* p;
    int size;
};