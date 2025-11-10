#include <iostream>

int binary_search(int arr[], int size, int k) {
    int l = 0;
    int r = size - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2; 

        if (arr[mid] == k) {
            return mid;
        }
        
        if (arr[mid] < k) {
            l = mid + 1;
        } 
        else {
            r = mid - 1;
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int result = binary_search(arr, size, k);

    if (result != -1) {
        std::cout << "Element " << k << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << k << " not found in the array." << std::endl;
    }

    return 0;
}