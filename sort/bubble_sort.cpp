#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size) {
    // Correct Bubble Sort implementation for descending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {3, 2, 4, 1};
    // Correctly calculate the number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]); 

    cout << "Original array: ";
    print_array(arr, size);

    bubble_sort(arr, size);

    cout << "Sorted array (descending): ";
    print_array(arr, size);
    
    return 0;
}