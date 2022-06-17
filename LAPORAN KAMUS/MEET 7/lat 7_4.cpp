#include<stdio.h>
#include<iostream>
using namespace std;
long fibonacci (long n)
{
 if (n==1 || n ==2)
 { return 1; }
 else
 { return fibonacci (n-1) + fibonacci(n-2); }
}


	main()
	{
			cout <<" NAMA  : LEONARD VIFFO " << endl;
			cout <<" NIM   : 211011401240  " << endl;	
			cout <<" KELAS : 02-TPLE 011   " << endl;
			cout <<" REKURSI FIBONACCI | LAT 7_4 " << endl;
			cout <<" =======================================" << endl;
			cout <<"\n";
			
			
			 int x;
			 printf("masukan nilai fibonacci\n");
			 printf("masukan nilai x:"); scanf("%d",&x);
			 printf("nilai fibonacci dari %d=%d\n", x, fibonacci(x));
	}


