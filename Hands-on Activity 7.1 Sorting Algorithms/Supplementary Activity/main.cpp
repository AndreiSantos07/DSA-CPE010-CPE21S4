#include <iostream>
#include <cstdlib> 
#include <ctime>  
#include "Bubb_sr.h" 

using namespace std;

int main() 
{
    srand(time(0)); 

    const int size = 100;
    int votes[size];
    int voteCount[6] = {0}; 
    
     // Array of random congratulatory strings ( I just wanted to add this for the winner.)
    const char* randomStrings[] = {"Nice One!", "Good Job!", "Excellent!", "Great!"};

    // Generate random votes 
    for (int i = 0; i < size; i++) 
    {
        votes[i] = rand() % 5 + 1; // Random numbers from 1 to 5 because we have 5 candidates
    }

    // Output the unsorted count of votes
    cout << "This is the raw and unsorted count of votes:\n";
    for (int i = 0; i < size; i++) 
    {
        cout << votes[i] << " ";
    }
    cout << endl;

    // Count the votes for each from the 5 candidates
    for (int i = 0; i < size; i++) 
    {
        voteCount[votes[i]]++;
    }

    // Sort the votes using bubble sort
    bubbleSort(votes, size);

    // Output the sorted count of votes
    cout << "\nNow, this is the sorted count of votes:\n";
    for (int i = 0; i < size; i++) 
    {
        cout << votes[i] << " ";
    }
    cout << endl;

    // Output the vote counts for the candidates 1 to 5, showing their individual votes
    cout << "\nThe number of votes for Candidates 1 to 5:\n";
    for (int candidate = 1; candidate <= 5; candidate++) 
    {
        cout << "Candidate " << candidate << ": " << voteCount[candidate] << " votes\n";
    }

    // This is where we find the highest count of the votes from the 5 candidates
    int winner = 1; // Start with candidate 1 as the winner
    for (int candidate = 2; candidate <= 5; candidate++) 
    {
        if (voteCount[candidate] > voteCount[winner]) 
        {
            winner = candidate;
        }
    }
    
     // Select a random congratulatory string (I just add this for the winner, for winning)
    int randomIndex = rand() % 4; // Random index from 0 to 3 because I have 4 choices of random strings
    
    // Output the winning candidate
    cout << "\nCongratulations to the winner!\n";
    cout << "Candidate " << winner << " gaining with " << voteCount[winner] << " votes! " << randomStrings[randomIndex];
    return 0;
}
