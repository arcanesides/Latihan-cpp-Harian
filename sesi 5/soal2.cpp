/*
Nama Program    : segitiga pascal
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Tanggal         : 05-10-2025
Waktu           : 17:38 s.d 17:50
Deskripsi       : program untuk membuat segitiga pascal
------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

// Fungsi untuk input jumlah baris
int inputJumlahBaris() {
    int n;
    cout << "Masukkan jumlah baris : ";
    cin >> n;
    return n;
}

// Fungsi untuk menampilkan pola segitiga Pascal
void tampilkanSegitigaPascal(int n) {
    for (int i = 0; i < n; i++) {
        int angka = 1;

        // Cetak spasi di awal baris
        for (int spasi = 0; spasi < n - i - 1; spasi++) {
            cout << " ";
        }

        // Cetak angka di setiap baris
        for (int j = 0; j <= i; j++) {
            cout << angka << " ";
            angka = angka * (i - j) / (j + 1);
        }

        cout << endl;
    }
}

int main() {
    int n = inputJumlahBaris();
    tampilkanSegitigaPascal(n);
    return 0;
}
