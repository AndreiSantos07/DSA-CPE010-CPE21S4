#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    const int size_of_Arr = 100; // declare the size which is 100 for the array
    int arr[size_of_Arr];

    srand(time(0)); // Srand for generating random number
    for (int i = 0; i < size_of_Arr; ++i) 
    {
        arr[i] = rand() % 100 ; // Random values between 0 to 100
        // I only chose 100 since I only want low value numbers but 100 elements
    }
    // Display the unsorted array which was declared that to be unsorted
    cout << "This is the unsorted Array:\n";
    for (int i = 0; i < size_of_Arr; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
