/*
Nama Program    : Keliling Lingkaran
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Deskripsi       : Menghitung nilai keliling lingkaran dari nilai diameter lingkaran
------------------------------------------------------------------------------------------------*/
// rumus keliling lingkaran K = pi * diameter
//pi = 3.14159

#include <iostream>
using namespace std;

int main(){
    double pi = 3.14159;
    float d;
    double K;

    cout << "Masukkan diameter lingkaran : "; cin >> d;

    K = pi * d;
    cout << "Keliling lingkaran adalah : " << K;
}