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
    for (int i = 0; i < 3; i++) {

    cout << "Data Mahasoswa Ke- " << (i+1) << ":" << endl;
    cout << "Nomor Mahasiswa : ";
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
    cout << "Data Mahasoswa Ke- " << (i+1) << ":" << endl;
    cout << "\nNIM : " << mhs[1].NIM;
    cout << "\nNama : " << mhs[1].nama;
    cout << "\nAlamat : ";
    cout << "\nDesa : " << mhs[1].alamat.desa;
    cout << "\nKota : " << mhs[1].alamat.kota;
    cout << "\numur : " << mhs[1].umur;
}

    return 0;

}


