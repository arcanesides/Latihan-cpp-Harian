
/*
Nama Program    : Gaji Karyawan
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Tanggal         : 03-10-2025
Waktu           : 17:20 s.d 17:34
Deskripsi       : menghitung gaji karyawan berdasarkan kriteria masa kerja
------------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;


long getGajiBulanan(int tahun, int lamaKerja) {
    if (lamaKerja < 0) {
        cout << "Masa kerja tidak boleh negatif." << endl;
        return 0;
    }

    if ((tahun >= 2019) && (tahun <= 2024)) {
        switch (lamaKerja) {
            case 0: case 1: return 2579400;
            case 2: case 3: return 2660700;
            case 4: case 5: return 2711500;
            case 6: case 7: return 2830900;
            case 8: case 9: return 2920100;
            default: return 0;
        }
    }
    else if (tahun > 2024) {
        switch (lamaKerja) {
            case 0: case 1: return 2785700;
            case 2: case 3: return 2873500;
            case 4: case 5: return 2964000;
            case 6: case 7: return 3057300;
            case 8: case 9: return 3153600;
            default: return 0;
        }
    }
    else {
        return 0;
    }
}

void inputData(int &tahun, int &lamaKerja) {
    cout << "Masukkan tahun: ";
    cin >> tahun;
    cout << "Masukkan masa bekerja (dalam tahun): ";
    cin >> lamaKerja;
}

void outputData(int tahun, int lamaKerja, long gajiBulanan) {
    if (gajiBulanan > 0) {
        cout << "\n=== INFORMASI GAJI ===" << endl;
        cout << "Tahun: " << tahun << endl;
        cout << "Masa kerja: " << lamaKerja << " tahun" << endl;
        cout << "Gaji bulanan: Rp " << gajiBulanan << endl;
        cout << "Total gaji pokok setahun: Rp " << gajiBulanan * 12 << endl;
    } else {
        cout << "Error: Data tidak valid atau belum ada peraturan gaji untuk tahun tersebut." << endl;
    }
}

int main() {
    int tahun, lamaKerja;
    long gajiBulanan;

    inputData(tahun, lamaKerja);
    gajiBulanan = getGajiBulanan(tahun, lamaKerja);
    outputData(tahun, lamaKerja, gajiBulanan);

    return 0;
}
