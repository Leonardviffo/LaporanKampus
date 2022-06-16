#include<iostream>
#include<stdio.h>

using namespace std;


int main () {

		cout <<" NAMA  : LEONARD VIFFO " << endl;
		cout <<" NIM   : 211011401240  " << endl;	
		cout <<" KELAS : 02-TPLE 011   " << endl;
		cout <<" PENGGUNAAN ARRAY | LAT7.8_2 " << endl;
		cout <<" =======================================" << endl;
			
			int square [100];
			int i , k ; 
			
			for (i=0; i<10; i++)
			
			{
				k= i + 1;
				square[i] = k*k;
				printf("\n Pangkat dari %d adalah %d ", k , square[i]);
			}
			
			return 0;
}


