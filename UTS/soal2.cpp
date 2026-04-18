#include <iostream>
using namespace std;

int main() {
    int biner, bagi;
    cout << "Input kode biner: ";
    cin >> biner;
    bagi = biner;
    int desimal = 0;
    int pangkat = 1; 

    if (biner < 0) {
        cout << "Pesan Rusak!" << endl;
        return 1;
    }
    
    while (bagi > 0) {
        int digit = bagi % 10;

        if (digit != 0 && digit != 1) {
        cout << "Pesan Rusak!" << endl;
        return 1;
        }
        desimal = desimal + digit * pangkat;
        pangkat = pangkat * 2;
        bagi = bagi / 10;
    }

    cout << "Angka desimal dari biner " << biner << " adalah " << desimal << endl;
}