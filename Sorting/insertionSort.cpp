/*
Nama Program    : insertion sort
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : 2-11-2025
Deskripsi       : Program untuk mengimplementasikan algoritma insertion sort
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

void insertionSort(arr &a, int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];   // elemen yang akan disisipkan
        int j = i - 1;

        cout << "Proses penyisipan ke-" << i << " (key = " << key << "):" << endl;

        // Geser elemen yang lebih besar dari key ke kanan
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        // Tempatkan key di posisi yang benar
        a[j + 1] = key;

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

    cout << "\n=== Proses Insertion Sort ===" << endl;
    insertionSort(a, n);

    cout << "\nArray setelah diurutkan: ";
    tampilArray(a, n);

    cout << "\nProgram selesai. Terima kasih!\n";
    return 0;
}
