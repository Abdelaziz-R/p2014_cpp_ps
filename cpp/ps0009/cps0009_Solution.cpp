#include <iostream>

using namespace std;

template <typename T>
void swap_elements(T* arr1, int& size1, T* arr2, int& size2) {
    int minSize = min(size1, size2);

    for (int i = 0; i < minSize; i++) {
        T temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    // If one array is larger, fill the remaining elements with the other array's values
    if (size1 > size2) {
        for (int i = minSize; i < size1; i++) {
            arr1[i] = arr2[minSize - 1];
        }
    }
    else if (size2 > size1) {
        for (int i = minSize; i < size2; i++) {
            arr2[i] = arr1[minSize - 1];
        }
    }
}

int main() {
    int size1, size2;

    cout << "Enter the size of array 1: ";
    cin >> size1;

    cout << "Enter the size of array 2: ";
    cin >> size2;

    int* arr1 = new int[size1];
    int* arr2 = new int[size2];

    cout << "Enter elements for array 1: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements for array 2: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    swap_elements(arr1, size1, arr2, size2);

    cout << "Array 1 after swap: ";
    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Array 2 after swap: ";
    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;

    return 0;
}