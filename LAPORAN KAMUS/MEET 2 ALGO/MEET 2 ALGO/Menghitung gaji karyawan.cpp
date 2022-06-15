#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int lama,total_upah;
	long upah;
	char nama[20],gol;
	
	
	cout << " Nama Karyawan : ";
	cin.getline(nama,20) ;
	
	cout <<" Masukan Golongan :";
	cin >> gol;
	
	cout << " Jumlah jam kerja: ";
	cin >> lama;
	
	if (gol=='A' or 'a'){
		upah=5000;
		cout << " Upah kamu : " << upah << " per jam " << endl;}
		
			else if(gol=='B' or 'b'){
		upah=7000;
		cout << " Upah kamu : " << upah << " per jam " << endl;}
		
			else if(gol=='C' or 'c'){
		upah=8000;
		cout << " Upah kamu : " << upah << " per jam " << endl;}
		
			else if(gol=='D' or 'd'){
		upah=10000;
		cout << " Upah kamu : " << upah << " per jam " << endl;}
		
		else { cout <<"Tidak Valid"<< endl;}
		
		if (lama>0){
			total_upah=upah*lama;
			cout << " Total Lemburan kamu : " << total_upah << endl;
		}
	
	
	
	return 0;
}
