#include <iostream>
#include <queue>
using namespace std;

void display(queue<string> pl)
{
    while (!pl.empty())
    {
        // Print the front element of the queue by pl.front
        cout << pl.front() << endl; 
         // Remove the front element from the queue by pl.pop
        pl.pop(); 
    }
}

int main()
    {
    queue<string> pl; // Declared queue as string
    // Push these 3 elements into the queue
    pl.push("c++");
    pl.push("Java");
    pl.push("Python");
    
    cout << "Initial Stack: " << endl; // prints
    display(pl); // displays

    // Checks if the queue is full or not
    if (pl.size() >= 3) 
    {
        cout << "\nThe Queue is full" << endl; // prints if the queue is full
    }
    else
    {
    	cout << "\nThe Queue is not full" << endl; // prints if the Queue is not full
	}

    cout << "\nFinal Stack: " << endl; // prints
    display(pl); // displays

    return 0;
    }
