#include <iostream>
#include <stdlib.h>
#include <conio.h>
const float phi=3.14;
using namespace std;

int main () {
	
	int iter=0, pil, a;
    float volum, luas;
	
		cout <<"\n"; 
		cout <<" NAMA : LEONARD VIFFO"<<endl;
		cout <<" NIM  : 211011401240"<<endl;
		cout <<" KELAS  : 02-TPLE011"<<endl;
		cout <<" TUGAS AKHIR PERTEMUAN 2"<<endl;
		cout <<"\n"; 
		
		cout << " Algoritma dari Perhitungan Volume dan Luas Permukaan Bola" << endl;

		cout << " - user memasukan sebuah nilai ( baik itu bilangan float/int ) " <<endl;
		cout << " - menghitung luas dan volume bola " <<endl;
		cout << " - setelah itu , keluarkan ke layar." <<endl;
		
		cout <<"\n";
		cout <<"\n";  
		
		cout << " Perhitungan Volume dan Luas Permukaan Bola" << endl;
        cout << " Panjang Dari Jari* bola : "; // user memasukan sebuah nilai 
        cin >> a; // akan di tampung oleh variabel bilangan bulat (a)
        volum = 4/3 * phi * a * a * a; //  volume dari bola 4/3 * pi * r3
        luas = 4 * phi * a * a; // luas permukaan dari bola 4 * pi * r2 
        cout << " Volume Bola : " << volum << endl; // Akan di cetak-setelah sudah input oleh user lalu akan di proses oleh volum dan luas 
        cout << " Luas permukaan Bola : " << luas << endl; // Akan di cetak-setelah sudah input oleh user lalu akan di proses oleh volum dan luas 
        
        
        
}



