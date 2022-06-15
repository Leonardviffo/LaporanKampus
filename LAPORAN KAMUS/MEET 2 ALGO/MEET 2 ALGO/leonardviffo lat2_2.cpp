#include <iostream>
using namespace std;

int main (){
	
	int panjang ,lebar,tinggi;
	float luas,volume;
	
	
	cout <<"\n"; 
		cout <<" NAMA : LEONARD VIFFO"<<endl;
		cout <<" NIM  : 211011401240"<<endl;
		cout <<" KELAS  : 02-TPLE011"<<endl;
		cout <<" TUGAS PRAKTIKUM PERTEMUAN 2 (LAT.2.2)"<<endl;
		cout <<" MEMBUAT PROGRAM MENGHITUNG LUAS DAN VOLUME BALOK"<<endl;
	cout <<"\n";
		
		
		cout << " Masukan Panjang : ";
		cin >> panjang;
		
		
		cout << " Masukan Lebar : ";
		cin >> lebar;
		
		
		cout << " Masukan Tinggi : ";
		cin >> tinggi;
		
		
	luas = (2*panjang*lebar)+(2*panjang*tinggi)+(2*tinggi*lebar);
	volume = panjang*lebar*tinggi;
	
	cout<<" jadi luasnya adalah : " << luas <<endl;
	cout <<" jadi volumenya adalah :" << volume <<endl;	
		
}
