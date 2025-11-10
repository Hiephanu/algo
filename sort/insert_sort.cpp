#include <iostream>
using namespace std;

void insert_sort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        // 1. Chọn phần tử hiện tại (key) để chèn
        int key = arr[i];
        int j = i - 1;

        // 2. Di chuyển các phần tử của arr[0..i-1] lớn hơn key
        //    sang phải một vị trí.
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // 3. Chèn key vào vị trí đã tìm thấy
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout<< arr[i] << " ";
    } 
}

int main() {
    int arr[] = {3,4,2,7,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    insert_sort(arr, size);

    printArray(arr, size);
    
    return 0;
}