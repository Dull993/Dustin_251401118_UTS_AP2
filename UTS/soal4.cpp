#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i = 0;
    int jumlahVokal = 0;

    cout << "Masukkan Mantra: ";
    getline(cin, kalimat);

    while (i < kalimat.length()) {
        char c = tolower(kalimat[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            jumlahVokal++;
        }
        i++;
    }

    if (jumlahVokal > 0) {
        cout << "Kekuatan mantra: " << jumlahVokal<<" vokal"<< endl;
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal." << endl;
    }

    return 0;
}