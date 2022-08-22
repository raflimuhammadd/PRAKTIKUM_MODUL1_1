#include <iostream>
using namespace std;

int main () {
    int nilai;
    string keterangan, jabatan; //keterangan untuk jabatan


/*  nilai 17 - 20 : Manager
	nilai 14 - 16 : Asisten Manager
	nilai 11 - 13 : Senior Eksekutif
	nilai 8 - 10  : Eksekutif
	nilai 6 - 8   : Staff
	nilai 1 - 5   : Operator
*/

    cout << "  PROGRAM PENENTUAN JABATAN DENGAN NILAI " << endl;
    cout << "=======================================" << endl;
    
    cout << "Masukkan Nilai Anda : ";
    cin >> nilai;

    if (nilai > 20) {
        cout << "Nilai yang Anda Masukkan Salah" << endl;
    }else if (nilai >= 17) {
        jabatan = "Manager";
    }else if (nilai >= 14) {
        jabatan = "Asisten Manager";
    }else if (nilai >= 11) {
        jabatan = "Senior Eksekutif";
    }else if (nilai >= 8) {
        jabatan = "Eksekutif";
    }else if (nilai >= 6) {
        jabatan = "Staff";
    }else if (nilai >= 1) {
        jabatan = "Operator";
    }else {
        cout << "Nilai yang Anda Masukkan Salah" << endl;
    }
    cout << "Anda Mendapatkan Jabatan Sebagai : " << jabatan << endl;
    cout << "=======================================" << endl;
    cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI" << endl;
}