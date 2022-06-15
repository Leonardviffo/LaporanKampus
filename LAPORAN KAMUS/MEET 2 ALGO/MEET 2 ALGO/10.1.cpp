#include<iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;
int main(){
	
	cout <<"**************";
	cout <<" Leonard Viffo | 211011401240 | MEET 10.1 ";
	cout <<"**************"<< endl;
	
	cout <<"\n";
	
	int nilai,n,x,k,i,tmp;
	
	cout << " Masukan Jumlah Index ? : ";
	cin >> x;
	cout <<" **************************************"<<endl;
	
	int UrutanAngka[x];
	for (i=0; i<x; i++){
		
		cout << " Masukkan nilai ke-"<<i<<" = ";
        cin >>UrutanAngka[i];}
        cout << "\n";
		cout <<" ****************************"<<endl;
		cout << " Data yang belum terurut :  ";
		for (i=0; i<x; ++i){
		cout<<setw(5)<<UrutanAngka[i];}
		cout << "\n";
		cout <<" ****************************";
		cout <<"\n";
		
    	for(int c=0; c<x; c++){ 
        for(int d=0; d<x-c; d++){
        	
           	    if(UrutanAngka[d] < UrutanAngka[d+1]){  
                tmp = UrutanAngka[d];  
                UrutanAngka[d] = UrutanAngka[d+1];  
                UrutanAngka[d+1] = tmp;
   				}}}
   				
   				cout<<" Sesudah Terurut (BESAR KE KECIL):";  
   				for(i=0;i<x;i++){
        		cout<<setw(5)<<UrutanAngka[i];}
        	
        	cout << endl;
	
				cout <<"**********************************"<<endl;
				cout <<" Masukan Angka yang ingin kamu cari : ";
				cin >> nilai;
				cout <<"**********************************";
				cout <<"\n";
	
						 int m=0;
						 n=0;
							while (m<x){
							if (UrutanAngka[x] == nilai){
					        n--;
					        break;
					        }
					        m++;}
					        		if (n<x){
					        		cout << " --Bilangan Ditemukan-- ";
					        		cout << " \n Terdapat Pada bilangan Index : " <<i;}
					        		
									else {cout << " --Bilangan Tidak Ditemukan-- ";}
									cout <<"\n";
									cout <<"**************************************";
									cout <<"\n";
					   				
				
						return 0;
					}
