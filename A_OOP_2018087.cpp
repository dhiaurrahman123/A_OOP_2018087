#include <iostream>
using namespace std;

class Mahasiswa {
private: 
    int nim;
    string nama;
public:
    void inputdata() {
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

class MataKuliah {
private:
    string kode;
    string namamk;
    int sks;
public:
    void InputMK();
    void TampilMK();
};

void MataKuliah::InputMK() {
    cout << "\nMasukkan Kode Mata Kuliah : ";
    cin >> kode;
    cout << "\nMasukkan Nama Mata Kuliah : ";
    cin >> namamk;
    cout << "\nMasukkan SKS Mata Kuliah : ";
    cin >> sks;

}
void MataKuliah::TampilMK() {
    cout << "\nKode : " << kode << endl;
    cout << "Nama Mata Kuliah : " << namamk << endl;
    cout << "Jumlah SKS : " << sks << endl;
}
int main()
{
    Mahasiswa mhs;
    MataKuliah mhs;

    mhs.inputdata();
    mhs.tampildata();
}