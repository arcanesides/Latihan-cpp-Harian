/*
Nama Program    : radix sort
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : 4-11-2025
Deskripsi       : Program untuk mengimplementasikan algoritma Radix Sort 
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

// ambil nilai max dari array
int getMax(const arr &a, int n) {
    int mx = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > mx)
            mx = a[i];
    }
    return mx;
}

void countingSort(arr &a, int n, int exp) {
    int output[10];        // array sementara
    int count[10] = {0};   // frekuensi digit (0 - 9)

    // hitung jumlah kemunculan digit tertentu
    for (int i = 0; i < n; i++) {
        int digit = (a[i] / exp) % 10;
        count[digit]++;
    }

    // konversi count[] ke prefix sum supaya tau posisi akhir setiap digit
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // buat output[], isi dari belakang 
    for (int i = n - 1; i >= 0; i--) {
        int digit = (a[i] / exp) % 10;
        output[count[digit] - 1] = a[i];
        count[digit]--;
    }

    // salin hasilnya kembali ke array asli
    for (int i = 0; i < n; i++) {
        a[i] = output[i];
    }
}

void radixSort(arr &a, int n) {
    int m = getMax(a, n);      // nilai terbesar

    // lakukan counting sort untuk setiap digit
    for (int exp = 1; m / exp > 0; exp *= 10) {
        countingSort(a, n, exp);
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

    radixSort(a, n);

    cout << "Array setelah diurutkan: ";
    tampilArray(a, n);

    return 0;
}
