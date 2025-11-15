/*
Nama Program    : Bucket Sort 
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : 7-11-2025
Deskripsi       : Mengimplementasikan Bucket Sort menggunakan array 2D.
*/

#include <iostream>
using namespace std;
void tampilkan(float a[], int n) {
    for (int i = 0; i < n; i++) {   
        cout << a[i] << " ";
    }
    cout << endl;
}

void tukar(float &x, float &y) {
    float temp = x;   
    x = y;            
    y = temp;       
}


void insertionSort(float bucket[], int size) {
    for (int i = 1; i < size; i++) {     // mulai dari indeks ke-1
        int j = i;                       // pointer untuk bergerak mundur
        while (j > 0 && bucket[j - 1] > bucket[j]) {
            tukar(bucket[j - 1], bucket[j]); // tukar jika elemen sebelumnya lebih besar
            j--;                               // pindah satu langkah ke kiri
        }
    }
}

void bucketSort(float arr[], int n) {
    float bucket[100][100];   
    int bucketSize[100] = {0}; // menyimpan jumlah elemen per bucket

   // masukkan elemen ke bucket
    for (int i = 0; i < n; i++) {
        // menghitung index bucket berdasarkan nilai elemen
        int bi = n * arr[i];

        // masukkan elemen ke bucket bi pada posisi berikutnya
        bucket[bi][bucketSize[bi]] = arr[i];

        // tambah jumlah elemen dalam bucket tersebut
        bucketSize[bi]++;
    }

    // mengurutkan bucket
    for (int i = 0; i < n; i++) {
        // hanya sort jika bucket berisi lebih dari 1 elemen
        if (bucketSize[i] > 1) {
            insertionSort(bucket[i], bucketSize[i]);
        }
    }

    // gabungkan ke array asli
    int idx = 0; // pointer untuk array asli
    for (int i = 0; i < n; i++) {                       
        for (int j = 0; j < bucketSize[i]; j++) {       
            arr[idx++] = bucket[i][j];                  
        }
    }
}

int main() {
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = sizeof(arr) / sizeof(arr[0]);  

    cout << "Array sebelum sort:\n";
    tampilkan(arr, n);

    bucketSort(arr, n);

    cout << "\nArray setelah bucket sort:\n";
    tampilkan(arr, n);

    return 0;
}
