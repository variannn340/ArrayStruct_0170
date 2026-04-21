#include <iostream>
#include <string>

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
    Mahasiswa mhs[3];
    for (int i = 0; i < 3; i++) 
{
    cout << "Data Mahasiswa Ke- " << (i+1) << ":" << endl;
    cout << "NIM Mahasiswa : ";
    getline(cin, mhs[i].NIM);
    cout << "Nama Mahasiswa : ";
    getline(cin, mhs[i].nama);
    cout << "Alamat Mahasiswa : " << endl;
    cout << "\t Nama Desa : ";
    cin >> mhs[i].alamat.desa;
    cout << "\t Nama Kota : ";
    cin >> mhs[i].alamat.kota;
    cout << "Umur Mahasiswa : ";
    cin >> mhs[i].umur;
}

for (int i = 0; i < 3; i++) {
    cout << endl;
    cout << "Data Mahasiswa Ke- " << (i+1) << ":" << endl;
    cout << "\n NIM Mahasiswa : " << mhs[1].NIM;
    cout << "\n Nama : " << mhs[1].nama;
    cout << "\n Alamat : ";
    cout << "\n Desa : " << mhs[1].alamat.desa;
    cout << "\n Kota : " << mhs[1].alamat.kota;
    cout << "\n umur : " << mhs[1].umur;
}

    return 0;

}


