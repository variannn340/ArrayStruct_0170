#include <iostream>
using namespace std;

struct DetailAlamat { //Address Detail
    string desa; //village
    string kota; //city
};

struct Mahasiswa {
    string NIM;
    string nama;
    DetailAlamat alamat; 
    int umur;
    
};


int main() {
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs.NIM;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa : " << endl;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;
    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\nNIM : " << mhs.NIM;
    cout << "\nNama : " << mhs.nama;
    cout << "\nAlamat : ";
    cout << "\nDesa : " << mhs.alamat.desa;
    cout << "\nKota : " << mhs.alamat.kota;
    cout << "\numur : " << mhs.umur;

}