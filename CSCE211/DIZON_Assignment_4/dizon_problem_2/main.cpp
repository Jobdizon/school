#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int grid[20][20], numDoodles = 0, numBugs = 0;

// Function to determine the next step based on the current position and direction
void determineNextStep(int currentX, int currentY, int direction, int &newX, int &newY);

class Organism 
{
public:
    int x, y, lifespan;
};

class Bug : public Organism 
{
public:
    void birth(int startX, int startY);
    void move();
    void breed();
    void die();
} bugsArray[400];

class Doodlebug : public Organism 
{
public:
    int stepsTaken;
    void birth(int startX, int startY);
    void move();
    void breed();
    void die();
}doodlesArray[400];

// Function to display the current state of the grid
void displayGrid();

// Function to remove dead bugs from the bugsArray
void removeDeadBugs();

// Function to remove dead doodles from the doodlesArray
void removeDeadDoodles();

void Bug::birth(int startX, int startY) 
{
    x = startX;
    y = startY;
    lifespan = 0;
    grid[startX][startY] = 2;
    numBugs++;
}

void Bug::move() 
{
    int availableDirections = 0, nextX, nextY, i;
    lifespan++;

    for (i = 0; i < 4; i++) 
    {
        determineNextStep(x, y, i, nextX, nextY);
        if (grid[nextX][nextY] == 0)
            availableDirections++;
    }

    if (availableDirections > 0) 
    {
        if (availableDirections != 1)
            availableDirections = (rand() % availableDirections + 1);

        for (i = 0; i < 4 && availableDirections > 0; i++) 
        {
            determineNextStep(x, y, i, nextX, nextY);
            if (grid[nextX][nextY] == 0)
                availableDirections--;
        }

        grid[x][y] = 0;
        grid[nextX][nextY] = 2;
        x = nextX;
        y = nextY;

        if (lifespan >= 3) 
        {
            breed();
            lifespan = 0;
        }
    }
}

void Bug::breed() 
{
    int i, availableDirections = 0, nextX, nextY;
    for (i = 0; i < 4; i++) 
    {
        determineNextStep(x, y, i, nextX, nextY);
        if (grid[nextX][nextY] == 0)
            availableDirections++;
    }

    if (availableDirections > 0) 
    {
        if (availableDirections != 1)
            availableDirections = (rand() % availableDirections + 1);

        for (i = 0; i < 4 && availableDirections > 0; i++) 
        {
            determineNextStep(x, y, i, nextX, nextY);
            if (grid[nextX][nextY] == 0)
                availableDirections--;
        }

        bugsArray[numBugs].birth(nextX, nextY);
    }
}

void Bug::die() 
{
    grid[x][y] = 0;
}

void Doodlebug::birth(int startX, int startY) 
{
    x = startX;
    y = startY;
    lifespan = 3;
    stepsTaken = 0;
    grid[startX][startY] = 1;
    numDoodles++;
}

void Doodlebug::move() 
{
    int availableDirections = 0, nextX, nextY;
    stepsTaken++;

    for (int i = 0; i < 4; i++) 
    {
        determineNextStep(x, y, i, nextX, nextY);
        if (grid[nextX][nextY] == 2)
            availableDirections++;
    }

    if (availableDirections == 0)
    {
        lifespan--;
    }
        
    else 
    {
        if (availableDirections != 1)
            availableDirections = (rand() % availableDirections + 1);
        for (int i = 0; i < 4 && availableDirections > 0; i++) 
        {
            determineNextStep(x, y, i, nextX, nextY);
            if (grid[nextX][nextY] == 2)
                availableDirections--;
        }
        lifespan = 3;

        for (int j = 0; j < numBugs; j++) 
        {
            if ((bugsArray[j].x == nextX) && (bugsArray[j].y == nextY)) {
                bugsArray[j].die();
                removeDeadBugs();
            }
        }
        grid[this->x][this->y] = 0;
        grid[nextX][nextY] = 1;
        this->x = nextX;
        this->y = nextY;
    }

    if (stepsTaken >= 8)
        breed();
    if (lifespan <= 0)
        die();
}

void Doodlebug::breed() 
{
    int i, availableDirections = 0, nextX, nextY;
    for (i = 0; i < 4; i++) 
    {
        determineNextStep(x, y, i, nextX, nextY);
        if (grid[nextX][nextY] == 0)
            availableDirections++;
    }
    if (availableDirections > 0) 
    {
        if (availableDirections != 1)
            availableDirections = (rand() % availableDirections + 1);

        for (i = 0; i < 4 && availableDirections > 0; i++) 
        {
            determineNextStep(x, y, i, nextX, nextY);
            if (grid[nextX][nextY] == 0)
                availableDirections--;
        }
        doodlesArray[numDoodles].birth(nextX, nextY);
    }
}

void Doodlebug::die() 
{
    grid[x][y] = 0;
}

void displayGrid() 
{
    int i, j;
    char cellSymbol;
    system("cls");
    for (i = 0; i < 20; i++) 
    {
        for (j = 0; j < 20; j++) 
        {
            if (grid[i][j] == 0)
                cellSymbol = '-';
            else if (grid[i][j] == 1)
                cellSymbol = 'x';
            else if (grid[i][j] == 2)
                cellSymbol = 'o';
            cout << cellSymbol << " ";
        }
        cout << "\n";
    }
}

void determineNextStep(int currentX, int currentY, int direction, int &newX, int &newY) 
{
    newX = currentX;
    newY = currentY;
    if (direction == 0)
        newX--;
    if (direction == 1)
        newY++;
    if (direction == 2)
        newX++;
    if (direction == 3)
        newY--;
    if (newX < 0 || newY < 0 || newX >= 20 || newY >= 20) 
    {
        newX = currentX;
        newY = currentY;
    }
}

void removeDeadBugs() 
{
    int j, k;
    if (numBugs != 1)
        for (j = 0; j < numBugs;) 
        {
            if (grid[bugsArray[j].x][bugsArray[j].y] == 0) 
            {
                numBugs--;
                for (int k = j; k < numBugs; k++)
                    bugsArray[k] = bugsArray[k + 1];
            } else
                j++;
        }
    if (numBugs == 1)
        if (grid[bugsArray[0].x][bugsArray[0].y] == 0)
            numBugs--;
}

void removeDeadDoodles() 
{
    int j, k;
    if (numDoodles != 1)
        for (j = 0; j < numDoodles;) 
        {
            if (grid[doodlesArray[j].x][doodlesArray[j].y] == 0) 
            {
                numDoodles--;
                for (int k = j; k < numDoodles; k++)
                    doodlesArray[k] = doodlesArray[k + 1];
            } else
                j++;
        }
    if (numDoodles == 1)
        if (grid[doodlesArray[0].x][doodlesArray[0].y] == 0)
            numDoodles--;
}

int main() 
{
    int m, n, i, j, numDoodleInitial, numBugInitial;
    char ch = 'y';
    cout << "Enter the initial number of doodles and bugs: ";
    cin >> numDoodleInitial >> numBugInitial;

    for (i = 0; i < 20; i++)
        for (j = 0; j < 20; j++)
            grid[i][j] = 0;

    srand(time(0));

    for (i = 0; i < numDoodleInitial; i++) 
    {
        do 
        {
            m = rand() % 20;
            n = rand() % 20;
        } while (grid[m][n] != 0);
        doodlesArray[i].birth(m, n);
    }

    for (i = 0; i < numBugInitial; i++) 
    {
        do 
        {
            m = rand() % 20;
            n = rand() % 20;
        } while (grid[m][n] != 0);
        bugsArray[i].birth(m, n);
    }

    displayGrid();
    ch = cin.get();

    while (true) 
    {
        for (i = 0; i < numDoodles; i++)
            doodlesArray[i].move();
        removeDeadDoodles();
        for (i = 0; i < numBugs; i++)
            bugsArray[i].move();
        removeDeadBugs();

        displayGrid();
        cout << "Press Enter for the next iteration -> ";
        ch = cin.get();
    }

    return 0;
}
