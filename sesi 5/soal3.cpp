/*
Nama Program    : palindrom
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Tanggal         : 06-10-2025
Waktu           : 17:50 s.d 18:01
Deskripsi       : program untuk cek kata palindrom
------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

string inputKata() {
    string kata;
    cout << "Masukkan kata : ";
    cin >> kata;
    return kata;
}

bool cekPalindrom(string kata) {
    int n = kata.length();
    for (int i = 0; i < n / 2; i++) {
        if (kata[i] != kata[n - i - 1]) {
            return false;
        }
    }
    return true;
}

void tampilkanHasil(string kata, bool palindrom) {
    if (palindrom) {
        cout << kata << " merupakan kata palindrom" << endl;
    } else {
        cout << kata << " bukan berupakan kata palindrom" << endl;
    }
}

int main() {
    string kata = inputKata();
    bool hasil = cekPalindrom(kata);
    tampilkanHasil(kata, hasil);
    return 0;
}
