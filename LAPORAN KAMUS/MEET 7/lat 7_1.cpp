#include<iostream>
#include<stdio.h>

using namespace std;

int factorial(int n)

{
	if(n==1)
	{
		return(1);
	}
	else {
		return (n*factorial(n-1));
	}
	
}

main (){
	
		cout <<" NAMA  : LEONARD VIFFO " << endl;
		cout <<" NIM   : 211011401240  " << endl;	
		cout <<" KELAS : 02-TPLE 011   " << endl;
		cout <<" Rekursi dan factorial | LAT 7_1 " << endl;
		cout <<" =======================================" << endl;
		cout <<"\n";
		
	int x; 
	printf("mencari nilai faktorial\n");
	printf("masukan nilai x : ");
	scanf("%d", &x);
	printf("nilai factorial dari %d=%d\n", x, factorial(x));
}
