/*
Nama Program    : Decimal to Biner
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : Selasa, 30 September 2025
Deskripsi       : Program untuk mengkonversi bilangan desimal ke biner
Waktu Pengerjaan: 4 menit 9 detik
*/

#include <iostream>
using namespace std;

void inputBilangan(int &n){
    cout << "Masukkan bilangan desimal : "; cin >> n;
}

void decimalToBiner(int n){
    if (n > 1) {
        decimalToBiner(n/2);    // jika kurang dari 1 lanjutkan pembagian rekursif
    }
    cout << (n%2);      //cetak hasil sisa bagi
}

void output(int n){
    cout << "Hasil konversi biner dari " << n << " adalah "; decimalToBiner(n);
}

int main(){
    int n;

    inputBilangan(n);
    output(n);

}