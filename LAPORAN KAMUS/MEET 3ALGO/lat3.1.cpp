#include <iostream>
using namespace std;

int main (){
	
	
	cout <<"\n"; 
		cout <<" NAMA : LEONARD VIFFO"<<endl;
		cout <<" NIM  : 211011401240"<<endl;
		cout <<" KELAS  : 02-TPLE011"<<endl;
		cout <<" TUGAS PRAKTIKUM PERTEMUAN 3 (PRAKTIKUM LAT3.1)"<<endl;
		cout <<" program penggunaan if"<<endl;
	cout <<"\n";
	cout <<"------------------------------------------------" <<endl;
	cout <<"\n";
	
		int nilai,ulang;
		ulang=true;
		while (ulang) {
		
			cout << " Masukan Nilai : ";
			cin >> nilai;
			
			if ( nilai>70 ) { 
				cout << " lulus " << endl;
			} else {
				cout << " tidak lulus " << endl;
			}
	}
}
