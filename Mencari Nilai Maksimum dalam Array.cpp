#include <iostream>
using namespace std;

int main() {
 
    int angka[7] = {15, 25, 7, 30, 3, 18, 12};
    int maksimum = angka[0];

    
    for (int i = 1; i < 7; i++) {
        if (angka[i] > maksimum) {
            maksimum = angka[i];
        }
    }

    cout << "Nilai maksimum adalah: " << maksimum << endl;

    return 0;
}
