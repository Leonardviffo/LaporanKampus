#include <iostream>
using namespace std;

int main (){
	
	
	cout <<"\n"; 
		cout <<" NAMA : LEONARD VIFFO"<<endl;
		cout <<" NIM  : 211011401240"<<endl;
		cout <<" KELAS  : 02-TPLE011"<<endl;
		cout <<" TUGAS PRAKTIKUM PERTEMUAN 3 (Lat3.3)"<<endl;
		cout <<" MEMBUAT PROGRAM if"<<endl;
	cout <<"\n";
	cout <<"------------------------------------------------" <<endl;
	cout <<"\n";
	
	int x,ulang;
	ulang=true;
		while (ulang) {
	
	cout << " Masukan Nilai X : ";
	cin  >> x ;
	
	
	if (x > 0 ) {
		cout << " Nilai " << x << " adalah  bilangan positive " << endl;
	} else if ( x < 0 ) {
		cout << " Nilai " << x << " adalah  bilangan negative " << endl;
	} else if (x == 0 ) {
		cout << " Nilai " << x << " adalah  bilangan 0 " << endl;
	}
	ulang++;
}
	
}
