/*
Nama Program    : selection sort
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : 3-11-2025
Deskripsi       : Program untuk mengimplementasikan algoritma selection Sort
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

void selectionSort(arr &a, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // anggap elemen pertama sebagai nilai minimum

        // cari elemen terkecil di sisa array
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }

        cout << "Proses pertukaran ke-" << i + 1 << ": ";
        if (minIndex != i) {
            tukarPosisi(a[i], a[minIndex]);
        }
        tampilArray(a, n);
        cout << "-----------------------------------" << endl;
    }
}

int main() {
    arr a;
    int n;

    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "\nArray sebelum diurutkan: ";
    tampilArray(a, n);

    cout << "\n=== Proses Selection Sort ===" << endl;
    selectionSort(a, n);

    cout << "\nArray setelah diurutkan: ";
    tampilArray(a, n);

    cout << "\nProgram selesai. Terima kasih!\n";
    return 0;
}
