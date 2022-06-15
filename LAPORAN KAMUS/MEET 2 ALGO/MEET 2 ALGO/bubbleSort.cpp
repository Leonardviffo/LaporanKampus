#include <iostream>

using namespace std;

int main(){
	
	int x,j,Cop=0;
	
	cout << " Masukan Jumlah Data : ";
	cin >> x;
	
	int BubbleSort[x];
	for (int i; i<x; i++){
		cout << " Masukan Angka " << " ke " << i<< " = " ;
		cin >> BubbleSort[x];
	}
	
 	   for (int i =0; i<x; i++ ){
	   for ( j=i=0;  j<x; j++ ){
	   if (  BubbleSort[j] <  BubbleSort[i] ){
	   int Sort;
	
	Sort=  BubbleSort[i];
	 BubbleSort[i] = BubbleSort[j];
	 BubbleSort[j] = Sort;}}

	Cop++;}
	
	cout << endl;
	cout <<" Urutan data : " ;
	
	for (int i=0; i<BubbleSort[x]; i++){
	cout << " " << BubbleSort[x];}
	
	cout << endl;
	cout <<"\n";
	
return 0 ;
}
	
