#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int size = 10;
    int arr[size] = {5, 2, 9, 1, 7, 4, 8, 3, 6, 10};

    bubbleSort(arr, size);

    int min_value = arr[0];

    int max_value = arr[size - 1];

    cout << "Minimum value: " << min_value << endl;
    cout << "Maximum value: " << max_value << endl;

    return 0;
}
