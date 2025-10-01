/*
Nama Program    : Aviary Smart Cafe
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : Rabu, 1 Oktober 2025
Deskripsi       : Program untuk mengetahui jumlah meja dan kursi kosong dalam aviary cafe menggunakan konsep rekursif
Waktu Pengerjaan: 29 menit 33 detik
*/

#include <iostream>
using namespace std;

void input(int &jumlahMeja, int &kapasitas, int &jumlahPelanggan){
    cout << "Masukkan jumlah meja              : "; cin >> jumlahMeja;
    cout << "Masukkan kapasitas kursi per meja : "; cin >> kapasitas;
    cout << "Masukkan jumlah pelanggan         : "; cin >> jumlahPelanggan;
}

int countUnavailableTables(int jumlahPelanggan, int kapasitas){
    if(jumlahPelanggan <= 0){
        return 0;
    } else {
        return 1 + countUnavailableTables(jumlahPelanggan - kapasitas, kapasitas);
    }
}
int countAvailableSeats(int totalKursi, int jumlahPelanggan){
    if(jumlahPelanggan == 0){
        return totalKursi;
    } else if (totalKursi == 0){
        return 0;   //kalau kursi unavailable
    } else {
        return countAvailableSeats(totalKursi - 1, jumlahPelanggan - 1); //kurangi 1 kursi terisi
    }

}

void output(int jumlahMeja, int totalKursi, int jumlahPelanggan, int mejaTerpakai, int kursiKosong, int mejaKosong){
    cout << "\n------------ Aviary Smart Cafe Tables Seats Counter ------------\n";
    cout << "Total meja                 : " << jumlahMeja << endl;
    cout << "Total kursi                : " << totalKursi << endl;
    cout << "Total current customers    : " << jumlahPelanggan << endl;
    cout << "Total meja terpakai        : " << mejaTerpakai << endl;
    cout << "Total kursi terpakai       : " << jumlahPelanggan << endl;
    cout << "Total kursi kosong         : " << kursiKosong << endl;
    cout << "Total meja kosong          : " << mejaKosong << endl;
}

int main(){
    int jumlahMeja, kapasitas, jumlahPelanggan;

    input(jumlahMeja, kapasitas, jumlahPelanggan);
    
    int totalKursi = jumlahMeja * kapasitas;
    int kursiKosong = countAvailableSeats(totalKursi, jumlahPelanggan);
    int mejaTerpakai = countUnavailableTables(jumlahPelanggan, kapasitas);
    int mejaKosong = jumlahMeja - mejaTerpakai;

    output(jumlahMeja, totalKursi, jumlahPelanggan, mejaTerpakai, kursiKosong, mejaKosong);

}
