#include<iostream>
using namespace std;

void Genap(int a, int b){
	
		 	cout <<" NAMA  : LEONARD VIFFO " << endl;
			cout <<" NIM   : 211011401240  " << endl;	
			cout <<" KELAS : 02-TPLE 011   " << endl;
			cout <<" Genap dan Ganjil menggunakan Fungsi | TUGAS AKHIR " << endl;
			cout <<" =======================================" << endl;
			cout <<"\n";
			
	cout<<"Genap\t: ";
	while(a <= b){
		if(a % 2 == 0){
			cout<<a<<" ";
		}
		a++;
	}
}

void Ganjil(int a, int b){
	
	cout<<"\nGanjil\t: ";
	while(a <= b){
		if(a % 2 != 0){
			cout<<a<<" ";
		}
		a++;
	}
}
 
int main() {  

	
	int batas, i;
	i = 1;
	batas = 30;
	
	Genap(i, batas);
	
	i = 1;
	Ganjil(i, batas);
} 





