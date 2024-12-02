#include <iostream>
using namespace std;

int main() {
  
    int angka[10] = {11,12,13,14,15,16,17,18,19,20};
    int jumlah = 0;


    for (int i = 0; i < 10; i++) {
        jumlah += angka[i];
    }

    cout << "Jumlah semua elemen adalah: " << jumlah << endl;

    return 0;
}
