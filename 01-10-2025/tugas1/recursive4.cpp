/*
Nama Program    : Pecahan Uang Kembalian
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : Rabu, 1 Oktober 2025
Deskripsi       : Program untuk menentukan pecahan uang dari nominal kembalian yang diberikan
Waktu Pengerjaan: 13 menit 13 detik
*/

#include <iostream>
using namespace std;

void inputNominal(int &nominal){
    cout << "Masukkan nominal uang kembalian (rupiah) : "; cin >> nominal;
}

void pecahanUang(int nominal){

    if (nominal >= 100000){
        cout << 100000 << ", ";
        pecahanUang(nominal - 100000);
    } else if (nominal >= 50000){
        cout << 50000 << ", ";
        pecahanUang(nominal - 50000);
    } else if (nominal >= 20000){
        cout << 20000 << ", ";
        pecahanUang(nominal - 20000);
    } else if (nominal >= 10000){
        cout << 10000 << ", ";
        pecahanUang(nominal - 10000);
    } else if (nominal >= 5000){
        cout << 5000 << ", ";
        pecahanUang(nominal - 5000);
    } else if (nominal >= 2000){
        cout << 2000 << ", ";
        pecahanUang(nominal - 2000);
    } else if (nominal >= 1000){
        cout << 1000 << ", ";
        pecahanUang(nominal - 1000);
    } else if (nominal >= 500){
        cout << 500 << ", ";
        pecahanUang(nominal - 500);
    } else if (nominal >= 200){
        cout << 200 << ", ";
        pecahanUang(nominal - 200);
    } else if (nominal >= 100){
        cout << 100 << ", ";
        pecahanUang(nominal - 100);
    } else if (nominal >= 50){
        cout << 50 << ", ";
        pecahanUang(nominal - 50);
    } else {
        cout << nominal;
    }
}

void output(int nominal){
    cout << "Pecahan uang kembalian dengan nominal " << nominal << " adalah : "; pecahanUang(nominal);
}

int main (){
    int nominal;

    inputNominal(nominal);
    output(nominal);
}

