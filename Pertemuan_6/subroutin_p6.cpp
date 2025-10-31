#include <iostream>
using namespace std;

int tambah(int angka1, int angka2) {
    return angka1 + angka2;
}

int main () {
    int x = 5;
    int y = 10;

    int hasil = tambah(x, y);
    cout << "Hasil penjumlahan : " << hasil << endl;

    return 0;
}

