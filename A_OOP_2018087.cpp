#include <iostream>
using namespace std;

class Mahasiswa {
private: 
    int nim;
    string nama;
public:
    void inpitdata() {
        cout << "Masukkan NIM : ";
        cin >> nim;
        cout << "Masukkan Nama : ";
        cin >> nama;
    }
    void tampildata() {
        cout << "\nNIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}