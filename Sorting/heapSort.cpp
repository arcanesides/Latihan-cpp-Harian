/*
Nama Program    : heap sort
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : 3-11-2025
Deskripsi       : Program untuk mengimplementasikan algoritma Heap Sort
------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

typedef int arr[10];

void tampilArray(const arr &a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void heapify(arr &a, int n, int i) {
    int largest = i;              
    int l = 2 * i + 1;            
    int r = 2 * i + 2;            

    // jika anak kiri lebih besar dari root
    if (l < n && a[l] > a[largest])
        largest = l;

    // jika anak kanan lebih besar dari yang terbesar
    if (r < n && a[r] > a[largest])
        largest = r;

    // Jika largest bukan root, tukar
    if (largest != i) {
        swap(a[i], a[largest]);      // tukar node lebih kecil dengan anak yang lebih besar
        heapify(a, n, largest);      // lakukan heapify lagi pada subtree
    }
}

void heapSort(arr &a, int n) {
    // max heap
    for (int i = n/2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }

    // masukkan elemn satu per satu
    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);      // pindahkan root (maksimum) ke posisi akhir
        heapify(a, i, 0);      // heapify pada heap yang mengecil
    }
}

int main() {
    arr a = {0};       
    int n = 0;

    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "\nArray sebelum diurutkan: ";
    tampilArray(a, n);

    heapSort(a, n);

    cout << "Array setelah diurutkan: ";
    tampilArray(a, n);

    return 0;
}
