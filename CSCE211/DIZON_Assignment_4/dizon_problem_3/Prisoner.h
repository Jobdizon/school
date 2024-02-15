
// Node structure to represent a prisoner
struct PrisonerNode 
{
    int prisonerNumber;
    struct PrisonerNode *next;
};

// Circular Linked List class
class CircularPrisonerList 
{
    PrisonerNode *head, *tail;

public:
    CircularPrisonerList() : head(nullptr), tail(nullptr) {}

    // Create a circular linked list with 'numPrisoners' prisoners
    void create(int numPrisoners);

    // Calculate the correct position of the survivor by deleting nodes at every 'skipWords' interval
    void findSurvivor(int numPrisoners, int skipWords);
};
