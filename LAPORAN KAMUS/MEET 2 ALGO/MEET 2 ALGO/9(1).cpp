#include<iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){
	
	cout <<"**************";
	cout <<" Leonard Viffo | 211011401240 | MEET 9.1 ";
	cout <<"**************"<< endl;
	
	cout <<"\n";
	
	int nilai,x,n;
	int UrutanAngka[6]={1,2,3,4,5,6};
	
	for (int i=0; i<6; i++){
		cout <<" Index " << i << " : " << " List Data " << "["<< UrutanAngka[i]<<"]"<<"\n";}
	
	cout << endl;
	
	cout <<"**************************************"<<endl;
	cout <<" Masukan Angka yang ingin kamu cari : ";
	cin >> nilai;
	cout <<"**************************************";
	cout <<"\n";
	
 int i=0;
	 n=0;
		while (i<=6){
		if (UrutanAngka[i] == nilai){
            n++;
            break;
        }
        i++;}
				if (n<=5){
        		cout << "\n Bilangan Ditemukan ";
        		cout << "\n Terdapat Pada bilangan Index : " <<i;}
				else{cout << "\n Bilangan Tidak Ditemukan ";}
						cout <<"\n";
						cout <<"**************************************";
						cout <<"\n";
			
			
				return 0;}
