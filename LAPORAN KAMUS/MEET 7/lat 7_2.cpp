#include<iostream>
using namespace std;
 
int findmax(int n1, int n2);
void printmax(int m);
 
int main(){
	
		cout <<" NAMA  : LEONARD VIFFO " << endl;
		cout <<" NIM   : 211011401240  " << endl;	
		cout <<" KELAS : 02-TPLE 011   " << endl;
		cout <<" IMPLIMINTASI FUNGSI| LAT 7_2 " << endl;
		cout <<" =======================================" << endl;
		cout <<"\n";
	
 int i =5;    
 int j =7;    
 int k;    
 k =findmax(i,j);    
 printmax(k);
}
 
int findmax(int n1, int n2) {    
 if(n1 > n2) {  
  return n1;  
 } else {  
  return n2;  
 }
}
void printmax(int m) {    
 cout<<"bilangan yang terbesar adalah\t: "<<m;
}
