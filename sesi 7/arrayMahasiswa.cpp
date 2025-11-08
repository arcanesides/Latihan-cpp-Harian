/*
Nama Program    : Array Mahasiswa
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Tanggal         : 14-10-2025
Waktu           : 23:20 s.d 00:15
Deskripsi       : Array
------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <iomanip>  
using namespace std;

void inputNilai(int nilai[], int n) {
    cout << "\n=== INPUT NILAI MAHASISWA ===\n";
    for (int i = 0; i < n; i++) {
        cout << "Nilai mahasiswa ke-" << setw(2) << i + 1 << " : ";
        cin >> nilai[i];
    }
    cout << endl;
}

void cetakNilai(int nilai[], int n) {
    cout << "\n=== DAFTAR NILAI MAHASISWA ===\n";
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << setw(2) << i + 1 << " : " << nilai[i] << endl;
    }
}

double hitungRata(const int nilai[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += nilai[i];
    }
    return static_cast<double>(total) / n;
}

int cariMaks(const int nilai[], int n) {
    int maks = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] > maks)
            maks = nilai[i];
    }
    return maks;
}

int cariMin(const int nilai[], int n) {
    int min = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] < min)
            min = nilai[i];
    }
    return min;
}

void tampilTertinggiTerendah(const int nilai[], int n, int maks, int min) {
    cout << "\n=== HASIL PERBANDINGAN NILAI ===\n";
    cout << "Mahasiswa dengan nilai tertinggi (" << maks << "): ";
    for (int i = 0; i < n; i++) {
        if (nilai[i] == maks)
            cout << "Ke-" << i + 1 << " ";
    }
    cout << endl;

    cout << "Mahasiswa dengan nilai terendah  (" << min << "): ";
    for (int i = 0; i < n; i++) {
        if (nilai[i] == min)
            cout << "Ke-" << i + 1 << " ";
    }
    cout << endl;
}

void tampilHasilAkhir(double rata, int maks, int min) {
    cout << "\n=== HASIL NILAI ===\n";
    cout << fixed << setprecision(2);
    cout << "Rata-rata nilai : " << rata << endl;
    cout << "Nilai maksimum  : " << maks << endl;
    cout << "Nilai minimum   : " << min << endl;
}

int main() {
    int n;
    cout << "===========================================\n";
    cout << "   PROGRAM PENGOLAH DATA NILAI MAHASISWA\n";
    cout << "===========================================\n";
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    int nilai[n];

    inputNilai(nilai, n);
    cetakNilai(nilai, n);

    double rata = hitungRata(nilai, n);
    int maks = cariMaks(nilai, n);
    int min = cariMin(nilai, n);

    tampilHasilAkhir(rata, maks, min);
    tampilTertinggiTerendah(nilai, n, maks, min);

    cout << "===========================================\n";
    cout << "   TERIMA KASIH TELAH MENGGUNAKAN PROGRAM\n";
    cout << "===========================================\n";

}
