#include <iostream>
#include <conio.h>
using namespace std; 

int main (){
	int a=0,b=1,i,k,angka;
	
	cout << " Menghitung angka FIBONACCI " << endl;
	cout << "----------------------------" << endl;
	cout << "\n";
	
	cout << " Masukan angka : ";
	cin >> angka ;
	cout << "\n";
	
	cout << " " << b << " " ;
	
	for (i=2; i<angka; ++i ){
		
	k=a+b;
	cout << k <<" ";
	a=b;
	b=k;
		
	}
return(0);	
}
