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

		cout << "Alamat Mahasiswa : " << endl;
		cout << "\t Nama Desa : ";
		cin >> mhs[i].alamat.desa;
		cout << "\t Nama Kota : ";
		cin >> mhs[i].alamat.kota;
		cout << "Umur Mahasiswa : ";
		cout << mhs[i].umur;
		cin.ignore(1, '\n');
		cout << endl;
	}
	for (int i = 0;i < 3;i++) {
		cout << endl;
		cout << "Data Mahasiswa ke-" << (i + 1) << ":" << endl;
		cout << "\n NIM : " << mhs[i].nim;
		cout << "\n Nama : " << mhs[i].nama;
		cout << "\n Alamat : ";

	}
}   