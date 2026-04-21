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


