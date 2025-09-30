/*
Nama Program    : Tegangan Arus
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Deskripsi       : Menghitung nilai tegangan arus berdasarkan hukum Ohm menggunakan fungsi
------------------------------------------------------------------------------------------------*/
// rumus menghitung tengangan V = I * R

#include <iostream>
using namespace std;

void inputNilai(float &I, float &R){
    cout << "Masukkan nilai arus (ampere) : "; cin >> I;
    cout << "Masukkan nilai tegangan (ohm): "; cin >> R;
}

void countTegangan(float I, float R, float &V){
    V = I * R;
}

void output(float V){
    cout << "Hasil tegangan : " << V << " Volt";
}

int main(){
    float I, R, V;

    inputNilai(I, R);
    countTegangan(I, R, V);
    output(V);
}