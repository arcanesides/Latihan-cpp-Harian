/*
Nama Program    : Keliling Lingkaran
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Deskripsi       : Menghitung nilai keliling lingkaran dari nilai diameter lingkaran dengan fungsi
------------------------------------------------------------------------------------------------*/
// rumus keliling lingkaran K = phi * diameter
//phi = 3.14159


#include <iostream>
using namespace std;

void inputDiameter(float &d){
    cout << "Masukkan diameter lingkaran: " ; cin >> d;
}

void countKeliling(float d, double &K){
    double phi = 3.14159;
    K = phi * d;
}

void outputKeliling(double K){
    cout << "Keliling lingkaran adalah : " << K;
}

int main(){
    float d;
    double K;

    inputDiameter(d);
    countKeliling(d, K);
    outputKeliling(K);
}