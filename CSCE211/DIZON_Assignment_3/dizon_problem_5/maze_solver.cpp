// maze-solver.cpp
//
// This program fills in a maze with random positions and then runs the solver to solve it.
// The moves are saved in two arrays, which store the X/Y coordinates we are moving to.
// They are output in main in forward order.
//
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "maze_solver.h"
using namespace std;

// This new function adds two numbers to the arrays and increments the count of how many
// numbers have been added. It assumes the arrays have been created big enough to not
// have overflow. It is used to remember the coordinates of our solution.
mazeSolver::mazeSolver(){};
void mazeSolver::addToArrays(int x[], int y[], int &numEntries, int xVal, int yVal)
{
   x[numEntries] = xVal;
   y[numEntries] = yVal;
   numEntries++;
}

// Return true or false if moving to the specified coordinate is valid
// Return false if we have been to this cell already
bool mazeSolver::validMove(char maze[][WIDTH], bool visited[][WIDTH], int newX, int newY)
{
 // Check for going off the maze edges
 if (newX < 0 || newX >= WIDTH)
	return false;
 if (newY < 0 || newY >= HEIGHT)
	return false;
 // Check if target is a wall
 if (maze[newY][newX]=='X')
	return false;
 // Check if visited
 if (visited[newY][newX])
	return false;
 return true;
}

// Make the move on the maze to move to a new coordinate
// I passed curX and curY by reference so they are changed to
// the new coordinates.  Here we assume the move coordinates are valid.
// This returns true if we move onto the exit, false otherwise.
// Also update the visited array.
bool mazeSolver::move(char maze[][WIDTH], bool visited[][WIDTH],
	  int &curX, int &curY, int newX, int newY)
{
  bool foundExit = false;
  if (maze[newY][newX]=='E') 	// Check for exit
	foundExit = true;
  curX = newX;			// Update location
  curY = newY;
  visited[curY][curX] = true;
 
  return foundExit;
}

// Display the maze in ASCII
void mazeSolver::printMaze(char maze[][WIDTH], int curx, int cury)
{
  for (int y=0; y < HEIGHT;y++)
  {
    for (int x=0; x < WIDTH; x++)
    {
	if ((x==curx) && (y==cury))
		cout << "@";
	else
		cout << maze[y][x];
    }
    cout << endl;
  }
}

// Recursively search from x,y until we find the exit
bool mazeSolver::search(char maze[][WIDTH], bool visited[][WIDTH], int x, int y, int solutionX[], int solutionY[], int &numEntries)
//search(maze, visited, x, y, solutionX, solutionY, numPoints)
{
   bool foundExit = false;

   if (maze[y][x]=='E')
	return true;
   visited[y][x]=true;
   if (validMove(maze,visited,x,y-1))
	foundExit = search(maze,visited,x,y-1,solutionX,solutionY,numEntries);
   if (!foundExit && (validMove(maze,visited,x,y+1)))
	foundExit = search(maze,visited,x,y+1,solutionX,solutionY,numEntries);
   if (!foundExit && (validMove(maze,visited,x-1,y)))
	foundExit = search(maze,visited,x-1,y,solutionX,solutionY,numEntries);
   if (!foundExit && (validMove(maze,visited,x+1,y)))
	foundExit = search(maze,visited,x+1,y,solutionX,solutionY,numEntries);

   if (foundExit)
   {
	// Remember coordinates we found the exit in the solution arrays
	addToArrays(solutionX, solutionY, numEntries, x, y);	
	return true;
   }
   return false;
}

