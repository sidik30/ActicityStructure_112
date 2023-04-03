#include <iostream>
using namespace std;

struct AlamatDetail
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char NIM[12];
	char nama[25];
	AlamatDetail alamat;
	int Umur;
};

int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "Masukan NIm :";
		cin.getline(mhs[i].NIM, 12);
		cout << "Masukan Nama :";
		cin.getline(mhs[i].nama, 25);
		cout << "Alamat:";
		cout << "\n\tMasukan Desa :";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\tMasukan Kota :";
		cin. getline(mhs[i].alamat.kota, 20);
		cout << "Masukan Umur :";
		cin >> mhs[i].Umur;
		cin.ignore(1, '\n');


	}
}