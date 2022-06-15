#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

int main (){
	
	
	cout <<"\n"; 
		cout <<" NAMA : LEONARD VIFFO"<<endl;
		cout <<" NIM  : 211011401240"<<endl;
		cout <<" KELAS  : 02-TPLE011"<<endl;
		cout <<" TUGAS PRAKTIKUM PERTEMUAN 3 (PRAKTIKUM LAT3.2)"<<endl;
		cout <<" program penggunaan if-else"<<endl;
	cout <<"\n";
	cout <<"------------------------------------------------" <<endl;
	cout <<"\n";
	
		long int kode,jumlah,sks,semester;
		int ulang;
		char nama[100];
		
			printf (" Masukan Kode [1-2] :");scanf("%id",&kode);
			printf (" Jumlah SKS per semester [20-25] :");scanf("%id",&sks);
			
			if ( kode == 1 ) { 
				strcpy(nama,"Teknik informatika");
				jumlah = 30000*sks;
				semester = jumlah*2;
			} 
			
			else if ( kode == 2 ) { 
					strcpy(nama,"Akuntansi");
					jumlah = 20000*sks;
					semester = jumlah*2;
				} 
			else if ( kode == 1 ) { 
				strcpy(nama,"Manajemen");
				jumlah = 15000*sks;
				semester = jumlah*2;
			}
			
			printf("*========================================*\n");
			printf("Nama Kursus : %s\n",nama);
			printf("Pembayaran dalam 1 semester : %d\n",jumlah);
			printf("Pembayaran dalam 1 tahun : %d\n",semester);
			getch();
			}
