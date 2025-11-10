#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int k) {
    for (int i = 0; i < size; i ++) {
        if (arr[i] == k) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {3,4,6,1,2,7};
    int size = sizeof(arr);
    int result = linear_search(arr, size, 4);
    cout << result;
    return 0;
}