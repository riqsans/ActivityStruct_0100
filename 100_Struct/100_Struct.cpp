// 100_Struct.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	string umur;
};

int main() {
	Mahasiswa mhs[3];
	for (int i = 0;i < 3;i++) {
		cout << "Data ke-" << (i + 1) << ":" << endl;
		cout << "Nomor Mahasiswa : ";
		getline(cin, mhs[i].nim);
		cout << "Nama Mahasiswa : ";
		getline(cin, mhs[i].nama);
	}
}


