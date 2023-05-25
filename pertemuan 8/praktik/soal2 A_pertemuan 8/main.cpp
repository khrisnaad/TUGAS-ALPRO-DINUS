#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;

        // Cari nilai maksimum dari i+1 hingga akhir array
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        // Tukar elemen dengan nilai maksimum
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 2, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    cout << "Hasil pengurutan menggunakan Selection Sort:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
