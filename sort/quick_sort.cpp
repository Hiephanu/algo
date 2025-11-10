#include <iostream>
using namespace std;

void swap(int arr[], int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int partition(int size, int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l - 1;

    for (int j = l; j < r; j ++) {
        if (arr[j] < pivot) {
            i ++;
            swap(arr, i, j);
        }
    }

    swap(arr[i + 1], arr[r]);

    return i + 1;
}

void sort(int size, int arr[], int l, int r) {
    if (l < r) {
        int pivot = partition(size, arr, l, r);
        sort(size, arr, l, pivot - 1);
        sort(size, arr, pivot + 1, r);
    }
}

void printArray(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 9, 6, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(size, arr, 0, size - 1);
    printArray(size, arr);
    return 0;
}

// quick sort: Chọn pivot bên -> nhỏ hơn sang trái lơn hơn sang phải
// 2 9 6 3 4 5
// l = 0; r = 5; pivot = 1; pivotIndex = 5;
// Ở bước partition thì ta sẽ tìm các phần tử nhỏ hơn pivot trước, sau đó swap i + 1 và r là xong được bên trái nhỏ hơn pivot và phải lớn hơn pivot


