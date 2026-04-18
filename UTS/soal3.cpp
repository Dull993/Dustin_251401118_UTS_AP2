#include <iostream>
using namespace std;

int main() {
    string nama,nim;
    float rrata;
    int mk1, mk2, mk3;
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);

    cout << "Masukkan Nilai Mata Kuliah 1: ";
    cin >> mk1;

    cout << "Masukkan Nilai Mata Kuliah 2: ";
    cin >> mk2;

    cout << "Masukkan Nilai Mata Kuliah 3: ";
    cin >> mk3;
    

    rrata = (mk1 + mk2 + mk3) / 3.0;

    if (mk1 >= 60) {
        cout << "Mata Kuliah 1: Lulus." << endl;
    } else {
        cout << "Mata Kuliah 1: Tidak Lulus. Silakan ulangi tahun depan" << endl;
    }

    if (mk2 >= 60) {
        cout << "Mata Kuliah 2: Lulus." << endl;
    } else {
        cout << "Mata Kuliah 2: Tidak Lulus. Silakan ulangi tahun depan" << endl;
    }

    if (mk3 >= 60) {
        cout << "Mata Kuliah 3: Lulus." << endl;
    } else {
        cout << "Mata Kuliah 3: Tidak Lulus. Silakan ulangi tahun depan" << endl;
    }

    cout<<"Nilai rata-rata semester ini : "<<rrata<<endl;

}



















