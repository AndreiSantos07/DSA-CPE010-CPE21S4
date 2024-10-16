int main() 
{
    const int size_of_Arr = 100; 
    int arr[size_of_Arr];

    srand(time(0)); 
    for (int i = 0; i < size_of_Arr; ++i) {
        arr[i] = rand() % 1000; 
    }

    cout << "This is the unsorted Array:\n";
    for (int i = 0; i < size_of_Arr; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, size_of_Arr); // Call bubble sort

    cout << "\nNow, this is the sorted Array:\n";
    for (int i = 0; i < size_of_Arr; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
