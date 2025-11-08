/*
Nama Program    : faktorial
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Tanggal         : 08-10-2025
Waktu           : 18:20 s.d 18:07
Deskripsi       : menghitung faktorial
------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int inputAngka() {
    int n;
    cout << "Masukkan angka : ";
    cin >> n;
    return n;
}

long hitungFaktorial(int n) {
    long hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

void tampilkanHasil(int n, long faktorial) {
    cout << n << "! = " << faktorial << endl;
}

int main() {
    int n = inputAngka();
    long faktorial = hitungFaktorial(n);
    tampilkanHasil(n, faktorial);
    return 0;
}
