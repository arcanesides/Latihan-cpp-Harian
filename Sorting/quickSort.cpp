/*
Nama Program    : quick sort
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : 2-11-2025
Deskripsi       : Program untuk mengimplementasikan algoritma Quick Sort
------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

typedef int arr[10];

void tukarPosisi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void tampilArray(const arr &a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int partition(arr &a, int low, int high) {
    int pivot = a[high];      // memilih pivot
    int i = low - 1;          // batas elemen kecil

    for (int j = low; j < high; j++) {
        // kalau elemen lebih kecil dari pivot, pindahkan ke kiri
        if (a[j] < pivot) {
            i++;
            tukarPosisi(a[i], a[j]);
        }
    }

    // letakkan pivot pada posisi yang benar
    tukarPosisi(a[i + 1], a[high]);

    return i + 1; // posisi pivot setelah dipindahkan
}

void quickSort(arr &a, int low, int high) {
    if (low < high) {

        // pi = indeks pivot setelah diposisikan benar
        int pi = partition(a, low, high);

        // rekursif untuk bagian kiri pivot
        quickSort(a, low, pi - 1);

        // rekursif untuk bagian kanan pivot
        quickSort(a, pi + 1, high);
    }
}

int main() {

    arr a = {0};   
    int n;        

    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "\nArray sebelum diurutkan: ";
    tampilArray(a, n);

    quickSort(a, 0, n - 1);

    cout << "Array setelah diurutkan: ";
    tampilArray(a, n);

    return 0;
}
