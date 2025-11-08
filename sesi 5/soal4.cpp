/*
Nama Program    : local time
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Tanggal         : 07-10-2025
Waktu           : 17:20 s.d 17:34
Deskripsi       : program untuk menampilkan waktu local utc setiap 5 menit
------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <ctime>
#include <thread>
#include <chrono> // untuk chrono::seconds
using namespace std;

void tampilkanWaktu(const tm &localTime, const tm &utcTime) {
    char bufLocal[20], bufUTC[20];
    strftime(bufLocal, sizeof(bufLocal), "%H:%M:%S", &localTime);
    strftime(bufUTC, sizeof(bufUTC), "%H:%M:%S", &utcTime);

    cout << "Local Time : " << bufLocal << endl;
    cout << "UTC Time   : " << bufUTC << endl;
    cout << "---------------------" << endl;
}

// Fungsi untuk mengecek dan menampilkan waktu setiap 5 menit
void jalankanJam() {
    int last_minute = -1;

    while (true) {
        time_t now = time(0);
        tm localTime = *localtime(&now);
        tm utcTime = *gmtime(&now);

        if (localTime.tm_min % 5 == 0 && localTime.tm_sec == 0 && localTime.tm_min != last_minute) {
            tampilkanWaktu(localTime, utcTime);
            last_minute = localTime.tm_min;
        }

        this_thread::sleep_for(chrono::seconds(1));
    }
}

int main() {
    jalankanJam();
    return 0;
}
