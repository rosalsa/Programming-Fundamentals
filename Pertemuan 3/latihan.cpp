#include <iostream>
using namespace std;

int main () {
    string nama, npm, prodi, ukm;
    int umur;
    char jk;

    cout << "---- FORMULIR PENDAFTARAN UKM ----" << endl;
    cout << "Masukkan nama : ";
    getline(cin, nama);

    cout << "Masukkan NPM : ";
    getline(cin, npm);

    cout << "Masukkan umur : ";
    cin >> umur;

    cout << "Jenis Kelamin (L/P) : ";
    cin >> jk;

    cin.ignore();
    cout << "Masukkan Program Studi : ";
    getline(cin, prodi);

    cout << "Masukkan Nama UKM yang diikuti : ";
    getline(cin, ukm);

    cout << endl;

    cout << "---- Formulir Berhasil Di Simpan ----" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NPM : " << npm << endl;
    cout << "Umur : " << umur << endl;
    cout << "Jenis Kelamin : " << jk << endl;
    cout << "Program Studi : " << prodi << endl;
    cout << "UKM yang dipilih : " << ukm;
}

