#include <iostream>
using namespace std;

int main() {
 
    int angka[5];

    cout << "Masukkan 5 angka:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    cout << "Elemen array adalah: ";
    for (int i = 0; i < 5; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    return 0;
}
