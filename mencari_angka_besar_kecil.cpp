#include <iostream>
#include <conio.h>

using namespace std;
//chepytrisnandar//
//TIF 16 A//

void input();
void pilihanA();
void pilihanB();

int angka, jumlah, max, min, pilihan;



main () {


	while (pilihan != 3) {

		cout << "==== SELAMAT DATANG DI PROGRAM PENCARIAN ANGKA ====\n\n";

		cout << "Silahkan pilih jenis operasi :\n";
  	cout << " 1. Mencari nilai terkecil\n";
  	cout << " 2. Mencari nilai terbesar\n";
   cout << " 3. Keluar\n";

		cout << "================================\n";

		cout << "Pilihan Anda : ";
   cin >> pilihan;



	if (pilihan == 1) {

		pilihanA();
	} 
 else if (pilihan == 2) {
   pilihanB();

	}
}
}
void pilihanA() {

	int angka, jumlah, max, min;

     

       cout << "1. Mencari nilai terkecil. (jumlah angka ditentukan)" << endl;
       cout << endl;
       cout << "masukkan jumlah angka: "; cin >> jumlah;

       cout << endl;
       for (int i = 1; i <= jumlah; i++) {
       cout << "Masukkan Angka : "; cin >> angka;
       if ( i == 1 ) {

		 jumlah;
             min = angka;
             max = angka;
            }
            else if ( min > angka ) {
               min = angka;
            }
           }
       cout << endl;
       cout << "Nilai terkecil : " << min << endl;
	 cout << "jumlah : "	<< jumlah << endl;
    }

void pilihanB() {
		int angka, jumlah, max, min;
	cout << "2. Mencari nilai terbesar. (jumlah angka ditentukan)" << endl;
       cout << endl;
       cout << "masukkan jumlah angka: "; cin >> jumlah;
       cout << endl;
       for (int i = 1; i <= jumlah; i++) {
       cout << "Masukkan Angka : "; cin >> angka;
       if ( i == 1 ) {
				jumlah;
             min = angka;
             max = angka;
            }
            else if ( max < angka ) {
               max = angka;
            }
           }
       cout << endl;
       cout << "Nilai terbesar : " << max << endl;
	 cout << "jumlah : "	<< jumlah << endl;
}

