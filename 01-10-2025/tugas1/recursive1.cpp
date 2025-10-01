/*
Nama Program    : Fibonacci
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : Senin, 29 September 2025
Deskripsi       : Program untuk menghitung deret fibonacci menggunakan implementasi fungsi rekursif
Waktu Pengerjaan: 7 menit 32 detik
*/

#include <iostream>
using namespace std;

void inputBatas(int &n){
    cout << "Masukkan batas deret fibonacci : "; cin >> n;
}

int fibonacci(int m){
    if (m <= 1){
        return m;
    } else {
        return (fibonacci(m-2) + fibonacci(m-1));
    }
}

void output(int n){
    cout << "Hasil deret fibonacci adalah : ";
    for (int i = 0; i < n; i++){
        cout << fibonacci(i) << " ";
    }
}

int main(){
    int n;

    inputBatas(n);
    output(n);

}