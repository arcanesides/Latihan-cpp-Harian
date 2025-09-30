/*
Nama Program    : Average integer number
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Deskripsi       : Mencari nilai rata-rata dari 3 buah bilangan bulat 
------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    float hasil;

    cout << "Masukkan bilangan ke-1 : "; cin >> x;
    cout << "Masukkan bilangan ke-2 : "; cin >> y;
    cout << "Masukkan bilangan ke-3 : "; cin >> z;
    
    hasil = (x+y+z)/3;
    cout << "Hasil rata-rata : " << hasil;

}