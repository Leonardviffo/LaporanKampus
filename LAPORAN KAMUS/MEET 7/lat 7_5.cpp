#include<iostream>
using namespace std;
int mult(int x, int y, int z);
int main()
{
 int x, y, z;
 
 			cout <<" NAMA  : LEONARD VIFFO " << endl;
			cout <<" NIM   : 211011401240  " << endl;	
			cout <<" KELAS : 02-TPLE 011   " << endl;
			cout <<" PROGRAM PERKALIAN | LAT 7_5 " << endl;
			cout <<" =======================================" << endl;
			cout <<"\n";
 	
 cout << "masukan bilangan pertama :";
 cin>>x;
 cout << "masukan bilangan kedua :";
 cin>>y;
 cout << "masukan bilangan ketiga :";
 cin>>z;
 cout<< "hasil perkalian bilangan itu adalah " << mult(x, y, z);
 return 0;
}
int mult(int x, int y, int z)
{
 return x*y*z;
}
