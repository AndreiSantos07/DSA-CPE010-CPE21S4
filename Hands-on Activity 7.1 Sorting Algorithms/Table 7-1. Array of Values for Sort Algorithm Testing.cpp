#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() 
{
    const int size_of_Arr = 100; // declare the size whih is 100 for the array
    int arr[size_of_Arr];

    srand(time(0)); // Srand for generating random number
    for (int i = 0; i < size_of_Arr; ++i) {
        arr[i] = rand() % 1000 ; // Random values between 0 to 1000
    }

    // Display the unsorted array which was dedclared that to be unsorted
    cout << "Unsorted Array:\n";
    for (int i = 0; i < size_of_Arr; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
