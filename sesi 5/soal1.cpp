/*
Nama Program    : soal 1
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Tanggal         : 04-10-2025
Waktu           : 17:20 s.d 17:34
Deskripsi       : Menghitung rata-rata perubahan suhu setiap pergantian jam
------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <cstdlib>
using namespace std;

int inputDanHitungTotal(int jmlJam) {
    int suhu, total = 0;
    for (int jam = 1; jam <= jmlJam; jam++) {
        cout << "Masukkan suhu ke-" << jam << " : ";
        cin >> suhu;
        total += suhu;
    }
    return total;
}

void tampilkanHasil(int jmlJam, float rataSuhu) {
    cout << "\n=========================================\n";
    cout << "Rata-rata suhu selama " << jmlJam << " jam adalah: " << rataSuhu;
    cout << "\n=========================================\n";
}

int main() {
    int jmlJam;
    cout << "Masukkan jumlah jam pengukuran suhu: ";
    cin >> jmlJam;

    int totalSuhu = inputDanHitungTotal(jmlJam);
    float rataSuhu = static_cast<float>(totalSuhu) / jmlJam;

    tampilkanHasil(jmlJam, rataSuhu);

    system("pause");
    return 0;
}
