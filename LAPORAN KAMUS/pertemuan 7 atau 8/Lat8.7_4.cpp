#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	
	cout <<" NAMA  : LEONARD VIFFO " << endl;
		cout <<" NIM   : 211011401240  " << endl;	
		cout <<" KELAS : 02-TPLE 011   " << endl;
		cout <<" PENGGUNAAN ARRAY | LAT7.8_4 " << endl;
		cout <<" =======================================" << endl;
		
		int x [3][3];
		int a,b;
		cout<<" Masukan data matriks 3x3 = "<<endl;
			for(a=0;a<3;a++)
			{
			for(b=0;b<3;b++)
			{
			cout<<" Elemen ke- "<<(a+1)<<" Kolom "<<(b+1)<<":";
			cin>>x[a][b];
			}
			}
			cout<<" Matriks 3x3 ="<<endl<<endl;
			for(a=0;a<3;a++)
			{
			for(b=0;b<3;b++)
			{
			cout<<setw(4)<<x[a][b]<<"";
			}            
		   cout<<endl;
		}
		return 0;

}

