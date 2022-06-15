#include <iostream>
using namespace std;

int main (){
	
	
	cout <<"\n"; 
		cout <<" NAMA : LEONARD VIFFO"<<endl;
		cout <<" NIM  : 211011401240"<<endl;
		cout <<" KELAS  : 02-TPLE011"<<endl;
		cout <<" TUGAS PRAKTIKUM PERTEMUAN 2 (LAT.2.5)"<<endl;
		cout <<" MEMBUAT PROGRAM PENGGUNAAN OPERATOR HUBUNGAN"<<endl;
	cout <<"\n";
	cout <<"------------------------------------------------" <<endl;
	cout <<"\n";
	long int beli,disc,total;
	
	cout << " Masukan Jumlah Pemembelian : ";
	cin >> beli;
	
	if ( beli >=100000)
	
	{
		disc=0.1*beli;
		total=beli-disc;
	} else {
		disc=0.05*beli;
		total=beli-disc;
	}
	
	cout <<" jadi pembelian adalah : " << beli << endl;
	cout <<" total Discount adalah : " << disc << endl;
	cout <<" jadi pembayaran total adalah : " << total << endl;
	
	
	
	
	
}
