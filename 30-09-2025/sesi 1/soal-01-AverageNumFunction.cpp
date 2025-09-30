/*
Nama Program    : Average integer number
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Deskripsi       : Mencari nilai rata-rata dari 3 buah bilangan bulat menggunakan fungsi
------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

// gunakan pass by reference untuk mendapatkan nilai di fungsi selanjutnya
void inputNum(int &x, int &y, int &z){
    cout << "Masukkan bilangan ke-1 : "; cin >> x;
    cout << "Masukkan bilangan ke-2 : "; cin >> y;
    cout << "Masukkan bilangan ke-3 : "; cin >> z;
}

void countAverage(int x, int y, int z, float &hasil){
    hasil = (x + y + z) / 3.0f;
    cout << "Hasil rata-rata : " << hasil;
}

int main(){
    int x, y, z;
    float hasil;

    inputNum(x, y, z);
    countAverage(x, y, z, hasil);
}


