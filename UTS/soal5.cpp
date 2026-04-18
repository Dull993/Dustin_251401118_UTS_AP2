#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int jumlah_buku = 0;
    
       cout << "Masukkan daftar judul buku: ";
    getline(cin, input);
    
    int i = 0;
    while (i < input.length()) {
        while (i < input.length() && input[i] == ' ') {
            i++;
        }
    
        if (i < input.length()) {
            jumlah_buku++;
        }
        
        while (i < input.length() && input[i] != ' ') {
            i++;
        }
    }
    cout << "Jumlah judul buku: " << jumlah_buku << endl;

    return 0;
}