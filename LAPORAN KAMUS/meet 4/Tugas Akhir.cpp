#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
main() {
    int pembelian;
    
    cout << " LEONARD VIFFO | 211011401240 | 02-TPLE011" << endl;
    cout<<"========================="<<endl;
    cout<<"Rp.100.000 <= Pembelian < Rp.200.000"<<endl;
    cout<<"Rp.200.000 <= Pembelian < Rp.300.000"<<endl;
    cout<<"Rp.300.000 <= Pembelian < Rp.400.000"<<endl;
    cout<<"Rp.400.000 <= Pembelian < Rp.500.000"<<endl;
    cout<<"Pembelian >= Rp.500.000"<<endl;
    cout<<"========================="<<endl;
    
    cout<<"\n"<<endl;
    
    cout <<" Harga pembelian : " ; 
	cin >>pembelian;
	
	cout<<"\n"<<endl;
  
    if (pembelian<=100000 && pembelian<200000) {
        cout <<" Bonus : Discount 5% " << endl;
    }
    else if (pembelian<=200000 && pembelian<300000) {
        cout <<" Bonus : Tiket Ke Yogja " << endl;
    }
    else if (pembelian<=300000 && pembelian<400000) {
        cout <<" Bonus : Tiket Ke Bali " << endl;
    }
    else if (pembelian<=400000 && pembelian<500000) {
        cout <<" Bonus : Jam Tangan Rolex " << endl;
    }
    else if (pembelian>=500000) {
        cout <<" Bonus : Tiket ke swiss " << endl;
    }
    else {
    	cout <<" Tidak Valid " << endl;
	}
}
