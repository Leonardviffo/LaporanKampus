#include <stdio.h>

main() {
	printf( " LEONARD VIFFO | 211011401240 | 02-TPLE011");
  	printf("\n");
    char kode;
    int luas, keliling, panjang, lebar, alas, tinggi, sisi1, sisi2, sisi3, jari, pi;
    float luasS, luasL, kelilingL;
      
    printf("Masukkan kode menu [S/P/L] : ");
    kode = getchar();
    printf("\n");
  
    switch (kode) {
        case 'S':      
            printf("Masukkan alas : "); scanf("%d", &alas);
            printf("Masukkan tinggi : "); scanf("%d", &tinggi);
            printf("Masukkan sisi 1 : "); scanf("%d", &sisi1);
            printf("Masukkan sisi 2 : "); scanf("%d", &sisi2);
            printf("Masukkan sisi 3 : "); scanf("%d", &sisi3);
          
            luasS = 0.5*alas*tinggi;
            keliling = sisi1+sisi2+sisi3;
          
            printf("\n");
            printf("Luas Segitiga : %f\n", luasS);
            printf("Keliling Segitiga : %d\n", keliling);
            break;
          
        case 'P':
            printf("Masukkan panjang : "); scanf("%d", &panjang);
            printf("Masukkan lebar : "); scanf("%d", &lebar);
          
            luas = panjang*lebar;
            keliling = 2*(panjang+lebar);
          
            printf("\n");
            printf("Luas Persegi Panjang : %d\n", luas);
            printf("Keliling Persegi Panjang : %d\n", keliling);
            break;  
          
        case 'L':
            printf("Masukkan jari-jari : "); scanf("%d", &jari);
          
            luasL = 3.14*jari*jari;
            kelilingL = 3.14*(jari+jari);
          
            printf("\n");
            printf("Luas Lingkaran : %f\n", luasL);
            printf("Keliling Lingkaran : %f\n", kelilingL);
            break;
          
        default:
            printf("Kode tidak ada");
    }
    return 0;
}
