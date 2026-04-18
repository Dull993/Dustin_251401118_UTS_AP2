#include <iostream>
using namespace std;

int main() {
    int N;  
    cout<<"Masukkan sebuah bilangan Bulat :"<<endl;
    cin>>N;

    if (N <= 0) {
        cout<<"bukan"<<endl;
        return 0;
    }

    while (N % 2 == 0) {
        N = N / 2;
    }

    if (N == 1) {
        cout<<"ya"<<endl;
    } else {
        cout<<"bukan"<<endl;
    }
}
