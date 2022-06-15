#include <iostream>

using namespace std;

int main(){
	
    int UrutAngka[10]= {10,40,20,60,15,4,8,100,200,25};
	int j,Cop=0,max,min;
	
	cout << "Ini adalah data array belum di sort"<< endl;
	
	for (int i =0; i<10; i++ ){
	
	cout << " Data index : " << UrutAngka[i]<< endl;}
	
	   for (int i =0; i<10; i++ ){
	   for ( j=i+1;  j<10; j++ ){
	   if ( UrutAngka[j] < UrutAngka[i] ){
	   int Sort;
	
	Sort= UrutAngka[i];
	UrutAngka[i] = UrutAngka[j];
	UrutAngka[j] = Sort;}}

	Cop++;}
	cout << endl;
	cout <<" Urutan data Kecil Ke besar : " ;
	
	   for (int i=0; i<10; i++){
	   cout << " [" << UrutAngka[i] <<"]" ;}
	   for (int i =1; i<10; i++ ){
	   for ( j=0;  j<10-i; j++ ){
	   if ( UrutAngka[j] < UrutAngka[j+1]){
	   	
	   int Sort;
	Sort= UrutAngka[j];
	UrutAngka[j] = UrutAngka[j+1];
	UrutAngka[j+1] = Sort;}}}

    cout << endl;
	cout <<" Urutan data Besar Ke kecil : " ;
	
	for (int i=0; i<10; i++){
	cout << " [" << UrutAngka[i] <<"]" ;}
	
	cout << endl;
	cout <<"\n";
	
	max=UrutAngka[0];
	min=UrutAngka[0];
	for (int i = 0 ; i <10; i++)
        {
		if (max < UrutAngka[i]){
			max= UrutAngka[i];}
			else if ( min>UrutAngka[i]){
			min= UrutAngka[i];}}
	
	cout << " Angka Terbesar " << max<< endl;
	cout << " Angka Terkecil " << min<< endl;
	cout << " Leonard Viffo | 211011401240 ";
	
	return 0;}
