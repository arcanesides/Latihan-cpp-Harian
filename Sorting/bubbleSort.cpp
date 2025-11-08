/*
Nama Program    : bubble sort
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : 1-11-2025
Deskripsi       : Program untuk mengimplementasikan algoritma Bubble Sort
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

void bubbleSort(arr &a, int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << "Proses pertukaran ke-" << i+1 << ": \n";
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                tukarPosisi(a[j], a[j + 1]);
                tampilArray(a,n);
            }
        }
    }
}

int main() {
    arr a = { 7, 5, 3, 1, 2 };
    int n = 5;

    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "\nArray sebelum diurutkan: ";
    tampilArray(a, n);

    bubbleSort(a, n);

    cout << "Array setelah diurutkan: ";
    tampilArray(a, n);

    return 0;
}
