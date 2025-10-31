#include <iostream>
using namespace std;

int varGlobal = 20;

void tampilkan () {
    int varLocal = 30;

    cout << "Nilai variabel lokal : " << varLocal << endl;
    cout <<  "Nilai variabel global : " << varGlobal << endl;
}

int main () {
    tampilkan(); // kedua variabel bisa diakses

    // cout << "Nilai variabel lokal : " << varLocal << endl; // --> akan eror
    cout <<  "Nilai variabel global : " << varGlobal << endl; // variabel global bisa diakses dimana saja
    return 0;
}

