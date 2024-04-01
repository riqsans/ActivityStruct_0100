#include <iostream>
#include <string> // Memasukkan header <string> untuk getline

using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat; // Menggunakan DetailAlamat untuk menyimpan alamat
    string umur; // Menambahkan umur mahasiswa
};

int main() {
    Mahasiswa mhs[3];
    for (int i = 0; i < 3; i++) {
        cout << "Data ke-" << (i + 1) << ":" << endl;
        cout << "Nomor Mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);

        cout << "Alamat Mahasiswa : " << endl;
        cout << "\t Nama Desa : ";
        getline(cin, mhs[i].alamat.desa); // Menggunakan getline untuk input nama desa
        cout << "\t Nama Kota : ";
        getline(cin, mhs[i].alamat.kota); // Menggunakan getline untuk input nama kota

        cout << "Umur Mahasiswa : ";
        getline(cin, mhs[i].umur); // Meminta umur mahasiswa
    }

    for (int i = 0; i < 3; i++) {
        cout << endl;
        cout << "Data Mahasiswa ke-" << (i + 1) << ":" << endl;
        cout << "\n NIM : " << mhs[i].nim;
        cout << "\n Nama : " << mhs[i].nama;
        cout << "\n Alamat : ";
        cout << "\n \t Desa : " << mhs[i].alamat.desa;
        cout << "\n \t Kota : " << mhs[i].alamat.kota;
        cout << "\n Umur : " << mhs[i].umur;
        cout << endl;
    }
}
