/*
Nama Program    : Tegangan Arus
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Deskripsi       : Menghitung nilai tegangan arus berdasarkan hukum Ohm
------------------------------------------------------------------------------------------------*/
// rumus menghitung tengangan V = I * R

#include <iostream>
using namespace std;

int main(){
    float I, R, V;

    cout << "Masukkan nilai arus (ampere): "; cin >> I;
    cout << "Masukkan nilai tahanan (ohm): "; cin >> R;

    V = I * R;
    cout << "Hasil tegangan : " << V << " Volt"; 
}