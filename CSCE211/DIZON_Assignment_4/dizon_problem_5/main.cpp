#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    string key, value, line;

    fstream myFile;
    myFile.open("movie.txt"); // opens the file

    map<string, vector<int> > movie; // key: movie name, value: movie ratings

    if (myFile.is_open())
    {
        int numRatings;
        myFile >> numRatings; // Read the number of ratings

        for (int i = 0; i < numRatings; ++i) 
        {
            myFile.ignore(); // Consume newline after the count
            getline(myFile, key); // Read the movie name
            myFile >> value; // Read the rating

            // Convert the string to an integer and add it to the vector in the map
            movie[key].push_back(stoi(value));
        }

        // Display the movie names along with ratings
        for (const auto& reviews : movie) 
        {
            cout << reviews.first << ": " << reviews.second.size() << " reviews, average of ";
            int totalRatings = 0;
            for (int rating : reviews.second) 
            {
                totalRatings += rating;
            }
            double averageRating = static_cast<float>(totalRatings) / reviews.second.size();
            cout << averageRating << " / 5" << endl;
        }

        myFile.close(); // closes the file
    } 
    else 
    {
        cerr << "Error opening file: movie.txt" << endl;
    }

    return 0;
}
