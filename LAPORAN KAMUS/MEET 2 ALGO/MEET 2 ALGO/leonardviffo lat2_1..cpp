#include <iostream>


using namespace std;

int main (){
	
	int panjang ,lebar;
	float luas,keliling;
	
	
	cout <<"\n"; 
		cout <<" NAMA : LEONARD VIFFO"<<endl;
		cout <<" NIM  : 211011401240"<<endl;
		cout <<" KELAS  : 02-TPLE011"<<endl;
		cout <<" TUGAS PRAKTIKUM PERTEMUAN 2 (LAT.2.1)"<<endl;
		cout <<"\n";
	
	
	cout << " Masukan Panjang : ";
	cin >> panjang;
	
	cout << " Masukan Lebar : ";
	cin >> lebar;
	
	
	luas = panjang * lebar; 
	keliling = 2 *(panjang+lebar);
	cout<<" jadi luasnya adalah : " << luas <<endl;
	cout <<" jadi kelilingnya adalah :" << keliling <<endl;	
}
