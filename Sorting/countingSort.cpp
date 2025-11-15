/*
Nama Program    : counting sort
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : 5-11-2025
Deskripsi       : Program untuk mengimplementasikan algoritma Counting Sort 
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

int getMax(const arr &a, int n) {
    int mx = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > mx)
            mx = a[i];
    }
    return mx;
}

void countingSort(arr &a, int n) {
    int k = getMax(a, n);     // angka terbesar -> panjang array count

    int count[100] = {0};     // asumsi elemen tidak lebih dari 100

    // hitung frekuensi setiap angka
    for (int i = 0; i < n; i++) {
        count[a[i]]++;
    }

    // tulis ulang array secara terurut berdasarkan frekuensi
    int index = 0;
    for (int i = 0; i <= k; i++) {
        while (count[i] > 0) {
            a[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    arr a = {0};
    int n;

    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    cout << "Masukkan elemen-elemen array (non-negatif): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "\nArray sebelum diurutkan: ";
    tampilArray(a, n);

    countingSort(a, n);

    cout << "Array setelah diurutkan: ";
    tampilArray(a, n);

    return 0;
}
