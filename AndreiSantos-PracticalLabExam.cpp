#include <iostream>
using namespace std;

int main()
{
    int n = 10;                                         // Declare the array which consists of 1 to 10, {plus the item that I will append}]
    int arr[11] = {1,2,3,4,5,6,7,8,9,10};

    int new_number_in_the_array;
    
    if(n < 11)                                          // i function runs if the numbetr is lower than 11, which is 10
        { 
        cout << "Enter the value you want to put or append in the array: ";
        cin >> new_number_in_the_array;
        cout << "The value that you entered is : " << new_number_in_the_array << endl;
        arr[n] = new_number_in_the_array, n++;
        cout << "The output of the values are :" << endl;
        }
                                                       // for loop for checking the size of the array.
    for(int i = 0; i < n; i++)
        {
        cout << arr[i] << " ";
        }
    return 0;
}

                                                        // Write a c++ program to append a new item to the end of the array. Original  : numbers = [1,2,3,4,5,6,7,8,9,10]
                                                        // AndreiSantos-PracticalLabExam for lab name title
