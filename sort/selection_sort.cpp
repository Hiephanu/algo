#include <iostream>
using namespace std;

int maxInt = INT_MAX;

void swap(int arr[], int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void sort(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        int min = maxInt;
        int minPos = -1;
        for (int j = i; j < size; j++) {
            if (arr[j] < min) {
                min = arr[j];
                minPos = j;
            }
        }
        if (minPos != -1) {
            swap(arr, i, minPos);
        }
    }
}

void printArray(int size, int arr[]) {
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {3,6,7,1,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(size, arr);
    printArray(size, arr);
    return 0;
}