#include<iostream>
#include<stdio.h>
void printArray (int [] [3]);
using namespace std;
main () {

		cout <<" NAMA  : LEONARD VIFFO " << endl;
		cout <<" NIM   : 211011401240  " << endl;	
		cout <<" KELAS : 02-TPLE 011   " << endl;
		cout <<" PENGGUNAAN ARRAY | LAT7.8_3 " << endl;
		cout <<" =======================================" << endl;
			
			int matrik1 [2] [3] = {{1,2,3}, {4,5,6}},
				matrik2 [2] [3] = {1,2,3,4,5},
				matrik3 [2] [3] = {{1,2}, {4}};
			printArray (matrik1);
			printArray (matrik2);
			printArray (matrik3);
			return 0 ; } 
			
			void printArray (int a [] [3]){
				int i ,j;
				for (i=0; i<=1; i++ ){
					for ( j=0; j<=2; j++)
					printf ("%d",a [i] [j] );
					printf ("\n");
					
				}
			}


