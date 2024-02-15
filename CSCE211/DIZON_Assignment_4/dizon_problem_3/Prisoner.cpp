#include <iostream>
#include "Prisoner.h"
using namespace std;

// Create a circular linked list with 'numPrisoners' prisoners
void CircularPrisonerList::create(int numPrisoners) 
{
    PrisonerNode *temp;
    int prisonerCount = 1;

    while (prisonerCount <= numPrisoners) 
    {
        temp = new PrisonerNode;
        temp->prisonerNumber = prisonerCount;
        temp->next = nullptr;

        if (head == nullptr) 
        {
            head = temp;
            tail = head;
        } 
        else 
        {
            tail->next = temp;
            tail = temp;
        }

        prisonerCount++;
    }

    tail->next = head;
}

// Calculate the correct position of the survivor
void CircularPrisonerList::findSurvivor(int numPrisoners, int skipWords) 
{
    PrisonerNode *current, *previous;
    int count;

    previous = current = head;

    while (current->next != current) 
    {
        if (skipWords == 1) 
        { 
            previous = previous->next;
            tail->next = previous;
            delete current;
            current = previous;
        } 
        else 
        {
            for (count = 0; count < skipWords - 1; count++) 
            { 
                previous = current;
                current = current->next;
            }

            previous->next = current->next;
            delete current;
            current = previous->next;
        }
    }

    head = current;
    cout << "With " << numPrisoners << " prisoners and " << skipWords << " words, I'd like to be number " << head->prisonerNumber << endl;
}

int main() {
    CircularPrisonerList prisonerList;
    int numPrisoners, skipWords;

    cout << "Enter the number of prisoners: ";
    cin >> numPrisoners;

    prisonerList.create(numPrisoners);

    cout << "Enter the number of words: ";
    cin >> skipWords;

    prisonerList.findSurvivor(numPrisoners, skipWords);

    return 0;
}

