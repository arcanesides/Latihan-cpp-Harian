/*
Nama Program    : shell sort
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : 6-11-2025
Deskripsi       : Program untuk mengimplementasikan algoritma Shell Sort 
------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

typedef int arr[100];

void tampilArray(const arr &a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void shellSort(arr &a, int n) {

    // gap dimulai dari n/2, lalu terus dibagi 2
    for (int gap = n / 2; gap > 0; gap /= 2) {

        // Mulai dari indeks = gap → elemen pertama di tiap kelompok
        for (int i = gap; i < n; i++) {

            int temp = a[i];   // untuk elemen yang akan ditempatkan pada posisi benar
            int j = i;
            
           // selama ada elemen yang lebih besar, geser satu langkah ke depan ke kelompok yg dipisahkan gap
            while (j >= gap && a[j - gap] > temp) {
                a[j] = a[j - gap];
                j -= gap;
            }

            // jadikan posisi yang ditemukan sebagai temp
            a[j] = temp;
        }
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

    shellSort(a, n);

    cout << "Array setelah diurutkan: ";
    tampilArray(a, n);

    return 0;
}
