/*
Nama Program    : bubble sort
Nama            : Ibnaty Farah Rabbany
NPM             : 140810240022
Hari/Tanggal    : 2-11-2025
Deskripsi       : Program untuk mengimplementasikan algoritma Bubble Sort dengan penambahan proses henti jika tidak ada lg pertukaran elemen
------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

typedef int arr[10];

void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void tampilArray(const arr &a, int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubbleSort(arr &a, int n){
    for (int i = 0; i < n-1; i++){
        cout << "\nProses pertukaran i-" << i+1 << endl;
        bool swaped = false;
        for(int j=0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                bool swaped = true;
                tukar(a[j], a[j+1]);
                tampilArray(a,n);
            }
        }
        if(!swaped){
            cout << "Tidak ada pertukran elemen disini, pertukaran selesai!" << endl;
        }
    }
}

int main(){
    arr a = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = size(a);

    cout << "array sebelum diurutkan: " << endl;
    tampilArray(a,n);

    bubbleSort(a,n);
    cout << "\narray setelah diurutkan: " << endl;
    tampilArray(a,n);
}