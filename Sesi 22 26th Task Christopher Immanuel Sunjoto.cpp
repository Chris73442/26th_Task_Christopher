#include <iostream>

void insertionSortDescending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Geser elemen yang lebih kecil dari key
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    std::cout << "Nilai setelah diurutkan (Descending): ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int nilai[] = {75, 90, 60, 85, 70};
    int n = sizeof(nilai) / sizeof(nilai[0]);

    std::cout << "Nilai sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        std::cout << nilai[i] << " ";
    }
    std::cout << std::endl;

    insertionSortDescending(nilai, n);
    printArray(nilai, n);

    return 0;
}
