#include <iostream>
using namespace std;

bool isOdd(int num) {
    return num % 2 != 0;
}

void findSmallestEven(int arr[], int size) {
    int smallestEven = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    if (smallestIndex != -1) {
        cout << "Nilai genap terkecil: " << smallestEven << endl;
        cout << "Index: " << smallestIndex << endl;
    } else {
        cout << "Tidak ada nilai genap dalam deret bilangan." << endl;
    }
}

int main() {
    int arr[] = {6, 7, 4, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSmallestEven(arr, size);

    return 0;
}
