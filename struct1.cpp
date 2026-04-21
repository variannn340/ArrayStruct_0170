#include <iostream>
using namespace std;

struct Mahasiswa {
    string NIM;
    string nama;
    string alamat;
    int umur;
    
};
int main() {
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs.NIM;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa : ";
    cin >> mhs.alamat;
    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n NIM : " << mhs.NIM;
    cout << "\n nama : " << mhs.nama;
    cout << "\n alamat : " << mhs.alamat;
    cout << "\n umur : " << mhs.umur;

}