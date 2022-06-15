#include <iostream>
using namespace std;

int main (){
	
	
	cout <<"\n"; 
		cout <<" NAMA : LEONARD VIFFO"<<endl;
		cout <<" NIM  : 211011401240"<<endl;
		cout <<" KELAS  : 02-TPLE011"<<endl;
		cout <<" TUGAS PRAKTIKUM PERTEMUAN 3 (Lat3.4)"<<endl;
		cout <<" MEMBUAT PROGRAM if-else"<<endl;
	cout <<"\n";
	cout <<"------------------------------------------------" <<endl;
	cout <<"\n";
	
	int x,ulang;
	ulang=true;
		while (ulang) {
	
	cout << " Masukan Nilai X : ";
	cin  >> x ;
	
	
	if (x >= 81 && x <=100 ) {
		cout << " NILAI A " << endl;
	} else if (x >= 71 && x <81 ) {
		cout << " NILAI B " << endl;
	} else if (x >= 61 && x <71 ) {
		cout << " NILAI C " << endl;
	} else if (x >= 51 && x <61 ) {
		cout << " NILAI D " << endl;
	} else if (x < 51  ) {
		cout << " NILAI E " << endl;
	}
	ulang++;
}
	
}
