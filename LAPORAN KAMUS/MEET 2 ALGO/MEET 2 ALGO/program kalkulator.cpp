#include<iostream>
#include<math.h>

using namespace std;

int main (){
	
	float a,b,hasil;
	char arit,reply;
	int i=0;
	
	 do{
		 cout<<" Apakah Kamu ingin Mengunakan Kalkulator ? (Y/N) ? ";
		 cin>>reply;
		 
		 i++;}
	while(reply=='N' or reply=='n');
 		 cout<<" Terima kasih" << endl;
		 

	cout << "-------------------------------------------------------\n";
	cout << "          Selamat Datang di Kalkulatorku               \n";
	cout << "-------------------------------------------------------\n";
	
	
	cout << " Masukan Angka 1 : ";
	cin >> a ;
	
	cout << " Masukan Angka 2 : ";
	cin >> b ;
	
	cout << " Masukan operator ( +,-,/,* ) : ";
	cin >> arit ;
	
	if (arit=='+'){
		hasil=a+b;
		cout << " Hasil Dari " <<  a << arit << b <<" Adalah " << hasil << endl;}
	else if (arit=='-'){
		hasil=a-b;
		cout << " Hasil Dari " <<  a << arit << b <<" Adalah " << hasil << endl;}
	else if	(arit=='/'){
		hasil=a/b;
		cout << " Hasil Dari " <<  a << arit << b <<" Adalah " << hasil << endl;}
	else if	(arit=='*'){
		hasil=a*b;
		cout << " Hasil Dari " <<  a << arit << b <<" Adalah " << hasil << endl;}
	else {
		cout << " Yang kamu masukan salah";
	}
	cout <<""<<endl;
do{
		 cout<<" Apakah Kamu Senang Mengunakan Kalkulator ? (Y/n) ? ";
		 cin>>reply;
		 
		 i++;}
	while(reply=='N' or reply=='n');
 		 cout<<" Terima kasih" << endl;
return 0;	
cin.get();	
}
