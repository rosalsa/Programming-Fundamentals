#include <iostream>
using namespace std;

int main () {
    string nama;
    int umur;

    cout << "Masukkan nama\t : ";
    getline(cin, nama);
    
    cout << "Masukkan umur\t : ";
    cin >> umur;

    cout << "Biodata" << endl;
    cout << "Nama : " << nama << endl;
    cout << "Umur : " << umur;

    return 0;
}

