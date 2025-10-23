#include <iostream>
using namespace std;

int main() {
    //FOR
    int i; //deklarasi variabel i
    int jml = 10; // deklarasi variabel jml
    
    for (i = 1; i <= jml; i++) {
        cout << "Perulangan ke-" << i << endl;
    }

    //WHILE
    int x = 5;
    cout << "Contoh dengan while : " << endl;
    while (x < 5) {
        cout << "Nilai x = " << x << endl;
        x++;
    }

    cout << "Perulangan WHILE Selesai.";
    return 0;

    //DO-WHILE
    int y = 5;
    
    cout << "Contoh Perulangan DO-WHILE" << endl;

    do {
        cout << "Nilai y = " << y << endl;
        y++;
    } while (y < 5);
    cout << "Perulangan DO-WHILE Selesai.";
    return 0;
}


