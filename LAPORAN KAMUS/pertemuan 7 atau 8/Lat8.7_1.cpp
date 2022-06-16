#include<iostream>
#include<stdio.h>
#define SIZE 12

using namespace std;


int main () {

		cout <<" NAMA  : LEONARD VIFFO " << endl;
		cout <<" NIM   : 211011401240  " << endl;	
		cout <<" KELAS : 02-TPLE 011   " << endl;
		cout <<" PENGGUNAAN ARRAY | LAT7.8_1 " << endl;
		cout <<" =======================================" << endl;

			int a [SIZE] = {1,3,5,4,7,2,99,16,45,67,89,45};
			int indeks, total=0;
			
			for (indeks=0; indeks<=SIZE-1; indeks++){
				total +=a[indeks];
			}
			
			printf("\n Total Setiap Elemen Array adalah %d", total);
			return 0;
}


