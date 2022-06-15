#include<iostream>
#include<math.h>

using namespace std;

int main (){
	
	
	char n_1,n_2[20],n_3,n_4[20];
	int i=5;
	cout << " Apakah aku boleh mengenal mu ? Y/N : ";
	cin >> n_1;
	
	if(n_1 == 'Y' or n_1=='y'){
		cout << " Makasih ^^ "<< endl;
		cout << "--------------------------";
		cout <<"\n";
		cout << " Siapa Nama Kamu ? ";
		cin.getline(n_2,20) >> n_2;
		cout <<" Halo " << n_2 << ", Salam kenal ^^" << endl;
		cout << " Kamu tinggal dimana ? ";
		cin.getline(n_2,20) >> n_4;
		cout <<" Oh di " << n_4 << ", Aku juga dekat-dekat sana ^^" << endl;
		cout << " Salam Kenal ya ^^";
		
		}
 	else if (n_1=='N' or 'n'){
 		cout << "S erius Gamau mengenal ku ? ";
 		cin >> n_3;
 			if(n_3=='Y' or 'y'){
 				cout <<" Nanti Nyesel Loh hehe ";
			 }
 	
 }
 
 return(0);
}


