#include<iostream>
#include<stdio.h>

using namespace std;

void tukar(int x, int y);

main()
{
		cout <<" NAMA  : LEONARD VIFFO " << endl;
		cout <<" NIM   : 211011401240  " << endl;	
		cout <<" KELAS : 02-TPLE 011   " << endl;
		cout <<" PARAMETER FORMAL DAN ACTUAL | LAT 7_3 " << endl;
		cout <<" =======================================" << endl;
		cout <<"\n";
	
	int a,b;
	a=99;
	b=11;
	printf("nilai sebelum pemanggilan fungsi : \n");
	printf("nilai a=%d nilai b+%d\n\n",a,b);
	tukar(a,b);
	printf("nilai sesudah pemanggilan fungsi :\n");
	printf("nilai a=%d nilai b=%d\n\n",a,b);
}
 
 	void tukar (int px, int py){
 		int z;
 		z=px;
 		px=py;
 		py=z;
 		printf("nilai diakhir fungsi :\n");
 		printf("nilai px =%d nilai py = %d\n\n", px,py);
	 }

