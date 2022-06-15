#include <iostream>
using namespace std;

int main (){
	
	
	cout <<"\n"; 
		cout <<" NAMA : LEONARD VIFFO"<<endl;
		cout <<" NIM  : 211011401240"<<endl;
		cout <<" KELAS  : 02-TPLE011"<<endl;
		cout <<" TUGAS PRAKTIKUM PERTEMUAN 3 (TUGAS AKHIR)"<<endl;
		cout <<" MEMBUAT PROGRAM NAMA HARI DENGAN SWICTH CASE"<<endl;
	cout <<"\n";
	cout <<"------------------------------------------------" <<endl;
	cout <<"\n";
	
	int maulagi=true;
	int angka1;
	
	while (maulagi=true){
		cout << "Masukan angka 1 - 7 : " ;
		cin >> angka1;
	
	
		switch (angka1) {
			case 1 : cout << " Hari Senin " << endl;
			break;
			case 2 : cout << " Hari Selasa " << endl;
			break;
			case 3 : cout << " Hari Rabu " << endl;
			break;
			case 4 : cout << " Hari Kamis " << endl;
			break;
			case 5 : cout << " Hari Jumat " << endl;
			break;
			case 6 : cout << " Hari Sabtu " << endl;
			break;
			case 7 : cout << " Hari Minggu" << endl;
			break;
			default : cout << " PILIHAN TIDAK ADA" << endl; 
			break;
		}
			maulagi++;
	}
}
