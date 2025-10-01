/*
Nama Program    : Digit Sum
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : Selasa, 30 September 2025
Deskripsi       : Program untuk menghitung total nilai dari n digit
Waktu Pengerjaan: 3 menit 22 detik
*/

#include <iostream>
using namespace std;

void input(int &n){
    cout << "Masukkan bilangan : "; cin >> n;
}
int digitSum(int n){
    if (n == 0){
        return 0;
    } else {
        return (n%10) + digitSum(n/10);
    }
}

void output(int n, int hasil){
    cout << "Hasil total digit dari bilangan " << n << " adalah " << hasil;
}

int main(){
    int n, hasil;

    input(n);
    hasil = digitSum(n);
    output(n, hasil);
}