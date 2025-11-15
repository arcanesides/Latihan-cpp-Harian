/*
Nama Program    : merge sort
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : 2-11-2025
Deskripsi       : Program untuk mengimplementasikan algoritma Merge Sort
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
// fungsi untuk menggabungkan 2 bagian array yang sudah terurut
void merge(arr &a, int left, int mid, int right) {

    // hitung jumlah elemen di sub-array kiri dan kanan
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // buat array sementara
    int L[n1], R[n2];

    // salin data ke array sementara
    for (int i = 0; i < n1; i++) L[i] = a[left + i];
    for (int j = 0; j < n2; j++) R[j] = a[mid + 1 + j];

    // i = index array L, j = index array R, k = index array utama
    int i = 0, j = 0, k = left;

    //membandingkan elemen pertama dari subarray kiri dan kanan.
    //elemen yang lebih kecil diletakkan kembali ke array utama.
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k++] = L[i++];
        } 
        else {
            a[k++] = R[j++];
        }
    }

    // salin sisa elemen L jika masih ada
    while (i < n1) {
        a[k++] = L[i++];
    }

    // salin sisa elemen R jika masih ada
    while (j < n2) {
        a[k++] = R[j++];
    }
}

void mergeSort(arr &a, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        // mengurutkan bagian kiri
        mergeSort(a, left, mid);

        // mengurutkan bagian kanan
        mergeSort(a, mid + 1, right);

        // menggabungkan kedua bagian
        merge(a, left, mid, right);
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

    mergeSort(a, 0, n - 1);

    cout << "Array setelah diurutkan: ";
    tampilArray(a, n);

    return 0;
}
